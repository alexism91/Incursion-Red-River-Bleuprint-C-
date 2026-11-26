#pragma once
#include "CoreMinimal.h"
#include "ECameraRigInitialOrientation.generated.h"

UENUM()
enum class ECameraRigInitialOrientation : int32 {
    None,
    ContextYawPitch,
    PreviousYawPitch,
    PreviousAbsoluteTarget,
    PreviousRelativeTarget,
};

