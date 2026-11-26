#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "AdvancedAudioSubsystem.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UAkStateValue;
class UOdinAudioCapture;

UCLASS(Blueprintable)
class TEST_C_API UAdvancedAudioSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<int32> ActivePlayingIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOdinAudioCapture> OdinAudioCapture;
    
public:
    UAdvancedAudioSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnregisterOdinAudioCapture(UOdinAudioCapture* Capture);
    
    UFUNCTION(BlueprintCallable)
    bool StopPersistentEvent(int32 PlayingID, int32 FadeOutTimeMs);
    
    UFUNCTION(BlueprintCallable)
    void StopAllPersistent(int32 FadeOutTimeMs);
    
    UFUNCTION(BlueprintCallable)
    void SetPersistentState(const UAkStateValue* StateValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPersistentRtpcValue(const UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs);
    
    UFUNCTION(BlueprintCallable)
    void RegisterOdinAudioCapture(UOdinAudioCapture* Capture);
    
    UFUNCTION(BlueprintCallable)
    int32 PostPersistentEvent(UAkAudioEvent* Event);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOdinAudioCapture* GetOdinAudioCapture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActivePersistentEventCount() const;
    
};

