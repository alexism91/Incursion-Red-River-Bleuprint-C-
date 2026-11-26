#pragma once
#include "CoreMinimal.h"
#include "ESyncPointEventType.generated.h"

UENUM(BlueprintType)
enum class ESyncPointEventType : uint8 {
    Invalid,
    SimpleEvent,
    GameThreadTask,
    GameThreadTask_HighPriority,
    WorkerThreadTask,
    WorkerThreadTask_HighPriority,
};

