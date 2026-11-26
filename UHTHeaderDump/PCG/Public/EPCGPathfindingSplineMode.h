#pragma once
#include "CoreMinimal.h"
#include "EPCGPathfindingSplineMode.generated.h"

UENUM(BlueprintType)
enum class EPCGPathfindingSplineMode : uint8 {
    Curve,
    Linear,
};

