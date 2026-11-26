#pragma once
#include "CoreMinimal.h"
#include "HTNDecorator_TargetFloatRangeDecorator.h"
#include "HTNDecorator_RemainingPathLengthToMoveLoc.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNDecorator_RemainingPathLengthToMoveLoc : public UHTNDecorator_TargetFloatRangeDecorator {
    GENERATED_BODY()
public:
    UHTNDecorator_RemainingPathLengthToMoveLoc();

};

