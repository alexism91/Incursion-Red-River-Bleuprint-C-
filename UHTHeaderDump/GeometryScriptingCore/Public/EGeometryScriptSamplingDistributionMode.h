#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptSamplingDistributionMode.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptSamplingDistributionMode : uint8 {
    Uniform,
    Smaller,
    Larger,
};

