#pragma once
#include "CoreMinimal.h"
#include "EAttributeBasedRootMotionMode.generated.h"

UENUM()
enum class EAttributeBasedRootMotionMode : int32 {
    ApplyDelta,
    ApplyVelocity,
};

