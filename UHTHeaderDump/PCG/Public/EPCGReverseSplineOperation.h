#pragma once
#include "CoreMinimal.h"
#include "EPCGReverseSplineOperation.generated.h"

UENUM()
enum class EPCGReverseSplineOperation : int32 {
    Reverse,
    ForceClockwise,
    ForceCounterClockwise,
};

