#pragma once
#include "CoreMinimal.h"
#include "EChaosCacheInterpolationMode.generated.h"

UENUM(BlueprintType)
enum class EChaosCacheInterpolationMode : uint8 {
    QuatInterp,
    EulerInterp,
    DualQuatInterp,
};

