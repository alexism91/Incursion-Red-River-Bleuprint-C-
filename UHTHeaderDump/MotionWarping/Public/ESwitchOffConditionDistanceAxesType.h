#pragma once
#include "CoreMinimal.h"
#include "ESwitchOffConditionDistanceAxesType.generated.h"

UENUM(BlueprintType)
enum class ESwitchOffConditionDistanceAxesType : uint8 {
    AllAxes,
    IgnoreZAxis,
    OnlyZAxis,
};

