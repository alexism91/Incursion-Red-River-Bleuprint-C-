#pragma once
#include "CoreMinimal.h"
#include "EChaosVDKinematicTargetMode.generated.h"

UENUM()
enum class EChaosVDKinematicTargetMode : int32 {
    None,
    Reset,
    Position,
    Velocity,
};

