#pragma once
#include "CoreMinimal.h"
#include "EPCGCullPointsMode.generated.h"

UENUM(BlueprintType)
enum class EPCGCullPointsMode : uint8 {
    Ordered,
    Unordered,
};

