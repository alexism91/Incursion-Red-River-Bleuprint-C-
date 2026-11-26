#pragma once
#include "CoreMinimal.h"
#include "EEnemyActionFinishResult.generated.h"

UENUM(BlueprintType)
enum class EEnemyActionFinishResult : uint8 {
    Success,
    Aborted,
    ConditionFailed,
};

