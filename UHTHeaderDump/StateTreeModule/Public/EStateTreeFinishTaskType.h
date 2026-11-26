#pragma once
#include "CoreMinimal.h"
#include "EStateTreeFinishTaskType.generated.h"

UENUM(BlueprintType)
enum class EStateTreeFinishTaskType : uint8 {
    Failed,
    Succeeded,
};

