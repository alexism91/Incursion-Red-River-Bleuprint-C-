#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptSamplingWeightMode.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptSamplingWeightMode : uint8 {
    WeightToRadius,
    FilledWeightToRadius,
    WeightedRandom,
};

