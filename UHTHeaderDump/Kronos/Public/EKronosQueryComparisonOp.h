#pragma once
#include "CoreMinimal.h"
#include "EKronosQueryComparisonOp.generated.h"

UENUM(BlueprintType)
enum class EKronosQueryComparisonOp : uint8 {
    Equals,
    NotEquals,
    GreaterThan,
    GreaterThanEquals,
    LessThan,
    LessThanEquals,
};

