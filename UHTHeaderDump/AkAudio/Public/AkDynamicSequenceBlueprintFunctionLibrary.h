#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AkDynamicSequenceBlueprintFunctionLibrary.generated.h"

class UAkAudioNode;
class UAkDialogueEvent;
class UAkDynamicSequencePlaylistItem;
class UAkGroupValue;
class UObject;

UCLASS(Blueprintable)
class AKAUDIO_API UAkDynamicSequenceBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAkDynamicSequenceBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAkDynamicSequencePlaylistItem* CreateDynamicSequencePlaylistItemFromDialogueEvent(UAkDialogueEvent* DialogueEvent, const TArray<UAkGroupValue*>& Arguments, bool bOrderedPath, int32 DelayMs, UObject* CustomData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAkDynamicSequencePlaylistItem* CreateDynamicSequencePlaylistItemFromAudioNode(UAkAudioNode* AudioNode, int32 DelayMs, UObject* CustomData);
    
};

