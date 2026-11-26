#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AkDynamicSequenceTransition.h"
#include "EAkCallbackType.h"
#include "EAkDynamicSequenceState.h"
#include "EAkResult.h"
#include "OnAkPostEventCallbackDelegate.h"
#include "AkDynamicSequence.generated.h"

class UAkAudioNode;
class UAkCallbackInfo;
class UAkDialogueEvent;
class UAkDynamicSequencePlaylist;
class UAkDynamicSequencePlaylistItem;
class UAkGroupValue;

UCLASS(Blueprintable)
class AKAUDIO_API UAkDynamicSequence : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAkPostEventCallback GameObjectUserCallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkDynamicSequenceTransition DynamicSequenceTransition;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkDynamicSequencePlaylist* Playlist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkDynamicSequencePlaylistItem*> CurrentlyPlayingAudioNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAkDynamicSequenceState State;
    
public:
    UAkDynamicSequence();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    EAkResult Stop(const FAkDynamicSequenceTransition OverrideTransition);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    EAkResult SeekPercent(float Percent, bool bSeekToNearestMarker);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    EAkResult Seek(int32 PositionMS, bool bSeekToNearestMarker);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    EAkResult Resume(const FAkDynamicSequenceTransition OverrideTransition);
    
    UFUNCTION(BlueprintCallable)
    bool PostPlaylistItem(UAkDynamicSequencePlaylistItem* PlaylistItem, bool bPlayImmediately);
    
    UFUNCTION(BlueprintCallable)
    bool PostDialogueEventInPlaylist(UAkDialogueEvent* DialogueEvent, const TArray<UAkGroupValue*>& Arguments, bool bOrderedPath, bool bPlayImmediately);
    
    UFUNCTION(BlueprintCallable)
    bool PostAudioNode(UAkAudioNode* AudioNode, bool bPlayImmediately);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    EAkResult Play(const FAkDynamicSequenceTransition OverrideTransition);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    EAkResult Pause(const FAkDynamicSequenceTransition OverrideTransition);
    
    UFUNCTION(BlueprintCallable)
    void OnGameObjectCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    UAkDynamicSequencePlaylist* ModifyPlaylist();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    EAkResult GetPlayingItem(UAkAudioNode*& AudioNode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    EAkResult GetPauseTimes(int32& PauseTime, int32& Duration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    EAkResult Break();
    
};

