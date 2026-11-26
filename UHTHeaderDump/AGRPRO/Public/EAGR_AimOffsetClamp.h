#pragma once
#include "CoreMinimal.h"
#include "EAGR_AimOffsetClamp.generated.h"

UENUM(BlueprintType)
enum class EAGR_AimOffsetClamp : uint8 {
    Nearest,
    Left,
    Right,
};

