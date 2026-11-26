#pragma once
#include "CoreMinimal.h"
#include "EMotionWarpRotationMethod.generated.h"

UENUM(BlueprintType)
enum class EMotionWarpRotationMethod : uint8 {
    Slerp,
    SlerpWithClampedRate,
    ConstantRate,
    Scale,
};

