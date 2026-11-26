#pragma once
#include "CoreMinimal.h"
#include "InterchangeStepCurve.generated.h"

USTRUCT(BlueprintType)
struct FInterchangeStepCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> KeyTimes;
    
    INTERCHANGECOMMONPARSER_API FInterchangeStepCurve();
};

