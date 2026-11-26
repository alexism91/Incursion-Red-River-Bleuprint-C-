#pragma once
#include "CoreMinimal.h"
#include "IRRBriefingVariants.h"
#include "IRRBriefingWaitSettings.h"
#include "IRRMissionEvent.h"
#include "Templates/SubclassOf.h"
#include "IRRMissionEvent_PlayMissionBriefing.generated.h"

class UIRRAgentSetup;
class USimpleGameplayAbility_PlayMissionBriefing;

UCLASS(Blueprintable, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRMissionEvent_PlayMissionBriefing : public UIRRMissionEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FIRRBriefingVariants Briefing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UIRRAgentSetup* AgentOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float StartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bOverrideWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FIRRBriefingWaitSettings Wait;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSubclassOf<USimpleGameplayAbility_PlayMissionBriefing> AbilityClassOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bOnlyOnFirstMissionStart;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRetryTime;
    
public:
    UIRRMissionEvent_PlayMissionBriefing();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

