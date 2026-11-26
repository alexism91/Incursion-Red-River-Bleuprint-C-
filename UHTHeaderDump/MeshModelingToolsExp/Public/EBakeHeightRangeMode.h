#pragma once
#include "CoreMinimal.h"
#include "EBakeHeightRangeMode.generated.h"

UENUM()
enum class EBakeHeightRangeMode : int32 {
    Absolute,
    RelativeBounds,
};

