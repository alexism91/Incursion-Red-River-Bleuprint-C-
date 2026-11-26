#pragma once
#include "CoreMinimal.h"
#include "ESwitchOffConditionDistanceOp.generated.h"

UENUM(BlueprintType)
enum class ESwitchOffConditionDistanceOp : uint8 {
    LessThan,
    GreaterThan,
};

