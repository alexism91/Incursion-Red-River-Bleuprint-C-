#pragma once
#include "CoreMinimal.h"
#include "EStateTreeTraceStatus.generated.h"

UENUM(BlueprintType)
enum class EStateTreeTraceStatus : uint8 {
    TracesStarted,
    StoppingTrace,
    TracesStopped,
};

