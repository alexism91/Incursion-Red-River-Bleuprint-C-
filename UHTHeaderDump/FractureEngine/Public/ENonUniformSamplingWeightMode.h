#pragma once
#include "CoreMinimal.h"
#include "ENonUniformSamplingWeightMode.generated.h"

UENUM(BlueprintType)
enum class ENonUniformSamplingWeightMode : uint8 {
    ENonUniformSamplingWeightMode_WeightToRadius,
    ENonUniformSamplingWeightMode_FilledWeightToRadius,
    ENonUniformSamplingWeightMode_WeightedRandom,
};

