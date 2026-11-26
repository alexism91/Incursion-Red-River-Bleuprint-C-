#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNDecorator -FallbackName=HTNDecorator
#include "HTNDecorator_SetAvoidanceWeight.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNDecorator_SetAvoidanceWeight : public UHTNDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExecutionWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExecutionConsiderationRadius;
    
    UHTNDecorator_SetAvoidanceWeight();

};

