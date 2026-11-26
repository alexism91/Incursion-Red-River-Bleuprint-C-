#pragma once
#include "CoreMinimal.h"
#include "EPCGDispatchThreadCount.generated.h"

UENUM(BlueprintType)
enum class EPCGDispatchThreadCount : uint8 {
    FromFirstOutputPin,
    Fixed,
    FromProductOfInputPins,
};

