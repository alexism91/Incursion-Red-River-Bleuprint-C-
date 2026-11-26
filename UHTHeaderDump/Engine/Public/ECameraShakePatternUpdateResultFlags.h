#pragma once
#include "CoreMinimal.h"
#include "ECameraShakePatternUpdateResultFlags.generated.h"

UENUM(BlueprintType)
enum class ECameraShakePatternUpdateResultFlags : uint8 {
    ApplyAsAbsolute = 1,
    SkipAutoScale,
    SkipAutoPlaySpace = 4,
    Default = 0,
};

