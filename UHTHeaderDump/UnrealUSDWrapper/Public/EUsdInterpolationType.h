#pragma once
#include "CoreMinimal.h"
#include "EUsdInterpolationType.generated.h"

UENUM(BlueprintType)
enum class EUsdInterpolationType : uint8 {
    Held,
    Linear,
};

