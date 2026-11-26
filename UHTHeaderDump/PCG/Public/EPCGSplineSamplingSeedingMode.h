#pragma once
#include "CoreMinimal.h"
#include "EPCGSplineSamplingSeedingMode.generated.h"

UENUM(BlueprintType)
enum class EPCGSplineSamplingSeedingMode : uint8 {
    SeedFromPosition,
    SeedFromIndex,
};

