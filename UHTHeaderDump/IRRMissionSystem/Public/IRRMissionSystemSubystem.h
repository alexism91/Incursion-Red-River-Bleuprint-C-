#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=EAkCallbackType -FallbackName=EAkCallbackType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "IRRMissionBriefing.h"
#include "IRRPendingFirstTimeMark.h"
#include "OnMissionBriefingCallbackDelegate.h"
#include "OnMissionBriefingFinishedDelegate.h"
#include "OnMissionBriefingInterruptedDelegate.h"
#include "OnMissionBriefingPauseChangedDelegate.h"
#include "OnMissionBriefingStartedDelegate.h"
#include "IRRMissionSystemSubystem.generated.h"

class AActor;
class UAkCallbackInfo;
class UAkComponent;
class UIRRAgentSetup;
class UObject;

UCLASS(Blueprintable)
class IRRMISSIONSYSTEM_API UIRRMissionSystemSubystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionBriefingStarted OnMissionBriefingStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionBriefingFinished OnMissionBriefingFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionBriefingInterrupted OnMissionBriefingInterrupted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionBriefingPauseChanged OnMissionBriefingPauseChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionBriefingCallback OnMissionBriefingCallback;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMissionBriefingPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRMissionBriefing CurrentBriefingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRAgentSetup* CurrentAgent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentSourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPlayingEventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* CurrentAkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRPendingFirstTimeMark> PendingFirstTimeMarks;
    
public:
    UIRRMissionSystemSubystem();

    UFUNCTION(BlueprintCallable)
    void StopMissionBriefing();
    
    UFUNCTION(BlueprintCallable)
    bool SkipMissionBriefing();
    
    UFUNCTION(BlueprintCallable)
    bool SeekMissionBriefing(float Progress);
    
    UFUNCTION(BlueprintCallable)
    bool ResumeMissionBriefing();
    
    UFUNCTION(BlueprintCallable)
    void ReplayMissionBriefing();
    
    UFUNCTION(BlueprintCallable)
    void RemoveBriefingHold(UObject* Holder);
    
    UFUNCTION(BlueprintCallable)
    void PlayMissionBriefing(const FIRRMissionBriefing& BriefingData, UIRRAgentSetup* Agent, AActor* SourceActor, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    bool PauseMissionBriefing();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAudioEventCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionBriefingPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionBriefingPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionBriefingBusy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBriefingHeld();
    
    UFUNCTION(BlueprintCallable)
    bool InterruptMissionBriefing(bool bOnlyIfInterruptible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionBriefingRemainingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionBriefingProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionBriefingPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionBriefingDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRMissionBriefing GetCurrentMissionBriefingData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAgentSetup* GetCurrentMissionBriefingAgent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayMissionBriefing(const FIRRMissionBriefing& BriefingData, bool bForce) const;
    
    UFUNCTION(BlueprintCallable)
    void AddBriefingHold(UObject* Holder);
    
};

