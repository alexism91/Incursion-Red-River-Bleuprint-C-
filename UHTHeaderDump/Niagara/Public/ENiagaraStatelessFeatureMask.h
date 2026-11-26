#pragma once
#include "CoreMinimal.h"
#include "ENiagaraStatelessFeatureMask.generated.h"

UENUM(BlueprintType)
enum class ENiagaraStatelessFeatureMask : uint8 {
    ExecuteGPU = 1,
    ExecuteCPU,
    None = 0,
    ExecuteAll = 3,
    All = ExecuteAll,
};

