#pragma once
#include "CoreMinimal.h"
#include "ECameraAutoRotateDirection.generated.h"

UENUM()
enum class ECameraAutoRotateDirection : int32 {
    Facing,
    Movement,
    MovementOrFacing,
};

