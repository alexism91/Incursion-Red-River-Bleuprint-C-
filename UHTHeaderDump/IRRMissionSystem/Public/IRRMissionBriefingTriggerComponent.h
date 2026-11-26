#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EIRRBriefingPlayLimit.h"
#include "IRRBriefingVariants.h"
#include "IRRBriefingWaitSettings.h"
#include "IRRMissionBriefing.h"
#include "OnMissionBriefingTriggerStateChangedDelegate.h"
#include "OnMissionBriefingTriggeredDelegate.h"
#include "Templates/SubclassOf.h"
#include "IRRMissionBriefingTriggerComponent.generated.h"

class AActor;
class AIRRLevelTrigger;
class APawn;
class UIRRAgentSetup;
class USimpleGameplayAbility_PlayMissionBriefing;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRMISSIONSYSTEM_API UIRRMissionBriefingTriggerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRBriefingVariants Briefing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRAgentSetup* Agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRBriefingPlayLimit PlayLimit;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlaythroughKey;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USimpleGameplayAbility_PlayMissionBriefing> AbilityClassOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRBriefingWaitSettings Wait;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionBriefingTriggered OnBriefingTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionBriefingTriggerStateChanged OnTriggerStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRMissionBriefing BriefingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasPlayed;
    
public:
    UIRRMissionBriefingTriggerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryTriggerBriefing(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void SetTriggerEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void ResetTrigger(bool bResetFirstTime);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPawnEnteredZone(AIRRLevelTrigger* LevelZone, APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnMissionBriefingInterrupted(FIRRMissionBriefing InterruptedBriefing);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTriggerEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPlayed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPlaythroughKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTrigger() const;
    
};

