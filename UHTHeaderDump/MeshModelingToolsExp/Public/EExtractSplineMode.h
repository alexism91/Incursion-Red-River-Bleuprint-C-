#pragma once
#include "CoreMinimal.h"
#include "EExtractSplineMode.generated.h"

UENUM(BlueprintType)
enum class EExtractSplineMode : uint8 {
    PlaneCut = 1,
    OpenBoundary,
    PolygroupLoops,
};

