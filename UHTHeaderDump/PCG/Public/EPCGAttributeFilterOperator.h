#pragma once
#include "CoreMinimal.h"
#include "EPCGAttributeFilterOperator.generated.h"

UENUM(BlueprintType)
enum class EPCGAttributeFilterOperator : uint8 {
    Greater,
    GreaterOrEqual,
    Lesser,
    LesserOrEqual,
    Equal,
    NotEqual,
    InRange,
    Substring,
    Matches,
};

