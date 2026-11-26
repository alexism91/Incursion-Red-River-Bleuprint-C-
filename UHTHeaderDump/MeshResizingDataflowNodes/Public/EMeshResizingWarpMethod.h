#pragma once
#include "CoreMinimal.h"
#include "EMeshResizingWarpMethod.generated.h"

UENUM(BlueprintType)
enum class EMeshResizingWarpMethod : uint8 {
    WrapDeform,
    RBFInterpolate,
};

