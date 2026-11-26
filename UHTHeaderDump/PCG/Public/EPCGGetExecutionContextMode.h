#pragma once
#include "CoreMinimal.h"
#include "EPCGGetExecutionContextMode.generated.h"

UENUM(BlueprintType)
enum class EPCGGetExecutionContextMode : uint8 {
    IsEditor,
    IsRuntime,
    IsOriginal,
    IsLocal,
    IsPartitioned,
    IsRuntimeGeneration,
    IsDedicatedServer,
    HasAuthority,
};

