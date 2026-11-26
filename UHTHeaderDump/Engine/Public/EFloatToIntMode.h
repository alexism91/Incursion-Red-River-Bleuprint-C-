#pragma once
#include "CoreMinimal.h"
#include "EFloatToIntMode.generated.h"

UENUM(BlueprintType)
enum class EFloatToIntMode : uint8 {
    Truncate,
    Floor,
    Round,
    Ceil,
};

