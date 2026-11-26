#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "IRRLevelTrigger.h"
#include "IRRMissionBriefingVolume.generated.h"

class UIRRMissionBriefingTriggerComponent;

UCLASS(Blueprintable, NoExport)
class IRRMISSIONSYSTEM_API AIRRMissionBriefingVolume : public AIRRLevelTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRMissionBriefingTriggerComponent* BriefingTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DisabledColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor PlayedColor;
    
    AIRRMissionBriefingVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRMissionBriefingTriggerComponent* GetBriefingTrigger() const;
    
};

