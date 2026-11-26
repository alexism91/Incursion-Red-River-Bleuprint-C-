#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptEvaluateSplineRange.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptEvaluateSplineRange : uint8 {
    FullSpline,
    DistanceRange,
    TimeRange_ConstantSpeed,
    TimeRange_VariableSpeed,
};

