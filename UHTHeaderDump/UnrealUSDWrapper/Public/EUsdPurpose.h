#pragma once
#include "CoreMinimal.h"
#include "EUsdPurpose.generated.h"

UENUM(BlueprintType)
enum class EUsdPurpose : uint8 {
    Default,
    Proxy,
    Render,
    Guide = 4,
};

