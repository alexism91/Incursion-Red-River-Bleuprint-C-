#pragma once
#include "CoreMinimal.h"
#include "EQuestComparisonOperator.generated.h"

UENUM(BlueprintType)
enum class EQuestComparisonOperator : uint8 {
    Equal,
    NotEqual,
    Less,
    Greater,
    LessEqual,
    GreaterEqual,
};

