#pragma once
#include "CoreMinimal.h"
#include "ENiagaraGpuSyncMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraGpuSyncMode : uint8 {
    None,
    SyncCpuToGpu,
    SyncGpuToCpu,
    SyncBoth,
};

