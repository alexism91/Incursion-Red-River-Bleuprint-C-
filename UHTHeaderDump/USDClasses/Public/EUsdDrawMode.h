#pragma once
#include "CoreMinimal.h"
#include "EUsdDrawMode.generated.h"

UENUM()
enum class EUsdDrawMode : int32 {
    Origin,
    Bounds,
    Cards,
    Default,
    Inherited,
};

