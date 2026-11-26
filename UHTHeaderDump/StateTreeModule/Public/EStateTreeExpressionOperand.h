#pragma once
#include "CoreMinimal.h"
#include "EStateTreeExpressionOperand.generated.h"

UENUM(BlueprintType)
enum class EStateTreeExpressionOperand : uint8 {
    Copy,
    And,
    Or,
};

