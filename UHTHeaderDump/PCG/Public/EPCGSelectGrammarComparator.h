#pragma once
#include "CoreMinimal.h"
#include "EPCGSelectGrammarComparator.generated.h"

UENUM()
enum class EPCGSelectGrammarComparator : uint16 {
    BinaryOps = 32,
    Select,
    LessThan,
    LessThanEqualTo,
    EqualTo,
    GreaterThanEqualTo,
    GreaterThan,
    TernaryOps = 64,
    RangeExclusive,
    RangeInclusive,
};

