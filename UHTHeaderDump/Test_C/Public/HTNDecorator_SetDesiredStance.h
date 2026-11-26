#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNDecorator -FallbackName=HTNDecorator
#include "EIRRAIStanceState.h"
#include "HTNDecorator_SetDesiredStance.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNDecorator_SetDesiredStance : public UHTNDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRAIStanceState DesiredStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ActivationDelayRange;
    
    UHTNDecorator_SetDesiredStance();

};

