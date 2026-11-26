#pragma once
#include "CoreMinimal.h"
#include "EMirrorToolAction.generated.h"

UENUM(BlueprintType)
enum class EMirrorToolAction : uint8 {
    NoAction,
    ShiftToCenter,
    Left,
    Right,
    Up,
    Down,
    Forward,
    Backward,
};

