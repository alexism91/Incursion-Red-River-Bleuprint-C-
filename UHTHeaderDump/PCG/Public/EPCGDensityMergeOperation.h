#pragma once
#include "CoreMinimal.h"
#include "EPCGDensityMergeOperation.generated.h"

UENUM(BlueprintType)
enum class EPCGDensityMergeOperation : uint8 {
    Set,
    Ignore,
    Minimum,
    Maximum,
    Add,
    Subtract,
    Multiply,
    Divide,
};

