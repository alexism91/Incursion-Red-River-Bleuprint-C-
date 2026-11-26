#pragma once
#include "CoreMinimal.h"
#include "ESpaceCurveControlPointTransformMode.generated.h"

UENUM()
enum class ESpaceCurveControlPointTransformMode : int32 {
    Shared,
    PerVertex,
};

