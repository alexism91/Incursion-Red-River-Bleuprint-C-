#pragma once
#include "CoreMinimal.h"
#include "EPCGCollapseComparisonMode.generated.h"

UENUM(BlueprintType)
enum class EPCGCollapseComparisonMode : uint8 {
    Position,
    Center,
};

