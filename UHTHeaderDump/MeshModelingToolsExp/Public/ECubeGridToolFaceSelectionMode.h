#pragma once
#include "CoreMinimal.h"
#include "ECubeGridToolFaceSelectionMode.generated.h"

UENUM()
enum class ECubeGridToolFaceSelectionMode : int32 {
    OutsideBasedOnNormal,
    InsideBasedOnNormal,
    OutsideBasedOnViewRay,
    InsideBasedOnViewRay,
};

