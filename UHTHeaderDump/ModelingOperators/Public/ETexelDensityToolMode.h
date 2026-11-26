#pragma once
#include "CoreMinimal.h"
#include "ETexelDensityToolMode.generated.h"

UENUM()
enum class ETexelDensityToolMode : int32 {
    ApplyToIslands,
    ApplyToWhole,
    Normalize,
};

