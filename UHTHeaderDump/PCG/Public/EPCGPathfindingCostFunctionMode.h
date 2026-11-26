#pragma once
#include "CoreMinimal.h"
#include "EPCGPathfindingCostFunctionMode.generated.h"

UENUM(BlueprintType)
enum class EPCGPathfindingCostFunctionMode : uint8 {
    Distance,
    FitnessScore,
    CostMultiplier,
};

