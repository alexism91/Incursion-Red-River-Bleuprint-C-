#pragma once
#include "CoreMinimal.h"
#include "EMVVMConditionOperation.generated.h"

UENUM(BlueprintType)
enum class EMVVMConditionOperation : uint8 {
    Equal,
    NotEqual,
    MoreThan,
    MoreThanOrEqual,
    LessThan,
    LessThanOrEqual,
    BetweenInclusive,
    BetweenExclusive,
};

