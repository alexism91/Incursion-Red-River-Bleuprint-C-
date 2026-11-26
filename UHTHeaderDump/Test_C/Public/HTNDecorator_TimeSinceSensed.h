#pragma once
#include "CoreMinimal.h"
#include "HTNDecorator_TargetFloatRangeDecorator.h"
#include "HTNDecorator_TimeSinceSensed.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNDecorator_TimeSinceSensed : public UHTNDecorator_TargetFloatRangeDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyPersonalSense;
    
    UHTNDecorator_TimeSinceSensed();

};

