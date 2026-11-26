#pragma once
#include "CoreMinimal.h"
#include "ENonUniformSamplingDistributionMode.generated.h"

UENUM(BlueprintType)
enum class ENonUniformSamplingDistributionMode : uint8 {
    ENonUniformSamplingDistributionMode_Uniform,
    ENonUniformSamplingDistributionMode_Smaller,
    ENonUniformSamplingDistributionMode_Larger,
};

