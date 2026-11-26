#pragma once
#include "CoreMinimal.h"
#include "EPlaneBrushSideMode.generated.h"

UENUM(BlueprintType)
enum class EPlaneBrushSideMode : uint8 {
    BothSides,
    PushDown,
    PullTowards,
};

