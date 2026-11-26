#pragma once
#include "CoreMinimal.h"
#include "EQuestLogicalOperator.generated.h"

UENUM(BlueprintType)
enum class EQuestLogicalOperator : uint8 {
    And,
    Or,
};

