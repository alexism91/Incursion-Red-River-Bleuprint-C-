#pragma once
#include "CoreMinimal.h"
#include "EAGR_RotationMethod.generated.h"

UENUM(BlueprintType)
enum class EAGR_RotationMethod : uint8 {
    NONE,
    RotateToVelocity,
    AbsoluteRotation,
    DesiredRotation,
    DesiredAtAngle,
};

