#pragma once
#include "CoreMinimal.h"
#include "EOpenCurveEndShapes.generated.h"

UENUM(BlueprintType)
enum class EOpenCurveEndShapes : uint8 {
    Square,
    Round,
    Butt,
};

