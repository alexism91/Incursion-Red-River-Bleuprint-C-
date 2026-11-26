#pragma once
#include "CoreMinimal.h"
#include "EStateTreeRunStatus.generated.h"

UENUM(BlueprintType)
enum class EStateTreeRunStatus : uint8 {
    Running,
    Stopped,
    Succeeded,
    Failed,
    Unset,
};

