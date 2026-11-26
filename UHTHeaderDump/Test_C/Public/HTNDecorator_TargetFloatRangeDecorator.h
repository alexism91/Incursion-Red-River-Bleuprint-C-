#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "HTNDecorator_TargetDecorator.h"
#include "HTNDecorator_TargetFloatRangeDecorator.generated.h"

UCLASS(Abstract, Blueprintable)
class TEST_C_API UHTNDecorator_TargetFloatRangeDecorator : public UHTNDecorator_TargetDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange Range;
    
    UHTNDecorator_TargetFloatRangeDecorator();

};

