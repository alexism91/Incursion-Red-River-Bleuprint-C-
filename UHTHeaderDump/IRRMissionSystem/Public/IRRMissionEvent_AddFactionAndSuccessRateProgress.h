#pragma once
#include "CoreMinimal.h"
#include "IRRLoyaltyByFaction.h"
#include "IRRMissionEvent.h"
#include "IRRMissionEvent_AddFactionAndSuccessRateProgress.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRMissionEvent_AddFactionAndSuccessRateProgress : public UIRRMissionEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FIRRLoyaltyByFaction> LoyaltyProgress;
    
    UIRRMissionEvent_AddFactionAndSuccessRateProgress();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

