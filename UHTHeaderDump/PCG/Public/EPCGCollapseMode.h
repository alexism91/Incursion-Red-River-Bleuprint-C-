#pragma once
#include "CoreMinimal.h"
#include "EPCGCollapseMode.generated.h"

UENUM(BlueprintType)
enum class EPCGCollapseMode : uint8 {
    PairwiseClosest,
    AbsoluteClosest,
};

