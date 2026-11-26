#pragma once
#include "CoreMinimal.h"
#include "ESpaceCurveControlPointOriginMode.generated.h"

UENUM()
enum class ESpaceCurveControlPointOriginMode : int32 {
    Shared,
    First,
    Last,
};

