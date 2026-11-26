#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNDecorator -FallbackName=HTNDecorator
#include "EIRRTurnSpeedPreset.h"
#include "HTNDecorator_SetupRotation.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNDecorator_SetupRotation : public UHTNDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRTurnSpeedPreset TurnSpeed;
    
    UHTNDecorator_SetupRotation();

};

