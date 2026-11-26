#pragma once
#include "CoreMinimal.h"
#include "ERevolveSplineSampleMode.generated.h"

UENUM(BlueprintType)
enum class ERevolveSplineSampleMode : uint8 {
    ControlPointsOnly,
    PolyLineMaxError,
    UniformSpacingAlongCurve,
};

