#pragma once
#include "CoreMinimal.h"
#include "ECalibratedMapPixelOrigin.generated.h"

UENUM(BlueprintType)
enum class ECalibratedMapPixelOrigin : uint8 {
    TopLeft,
    BottomLeft,
    MAX,
};

