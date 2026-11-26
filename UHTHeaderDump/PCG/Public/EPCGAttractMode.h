#pragma once
#include "CoreMinimal.h"
#include "EPCGAttractMode.generated.h"

UENUM(BlueprintType)
enum class EPCGAttractMode : uint8 {
    Closest,
    MinAttribute,
    MaxAttribute,
    FromIndex,
};

