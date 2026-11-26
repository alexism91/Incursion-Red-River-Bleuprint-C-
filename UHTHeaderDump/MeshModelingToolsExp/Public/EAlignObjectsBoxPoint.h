#pragma once
#include "CoreMinimal.h"
#include "EAlignObjectsBoxPoint.generated.h"

UENUM()
enum class EAlignObjectsBoxPoint : int32 {
    Center,
    Bottom,
    Top,
    Left,
    Right,
    Front,
    Back,
    Min,
    Max,
};

