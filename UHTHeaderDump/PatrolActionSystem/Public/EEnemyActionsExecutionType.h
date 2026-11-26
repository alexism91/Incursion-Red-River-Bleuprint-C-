#pragma once
#include "CoreMinimal.h"
#include "EEnemyActionsExecutionType.generated.h"

UENUM(BlueprintType)
enum class EEnemyActionsExecutionType : uint8 {
    RandomAction,
    AllInTurn,
};

