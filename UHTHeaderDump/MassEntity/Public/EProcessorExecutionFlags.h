#pragma once
#include "CoreMinimal.h"
#include "EProcessorExecutionFlags.generated.h"

UENUM(BlueprintType)
enum class EProcessorExecutionFlags : uint8 {
    None,
    Standalone,
    Server,
    Client = 4,
    Editor = 8,
    EditorWorld = 16,
    AllNetModes = 7,
    AllWorldModes = 23,
    All = 31,
};

