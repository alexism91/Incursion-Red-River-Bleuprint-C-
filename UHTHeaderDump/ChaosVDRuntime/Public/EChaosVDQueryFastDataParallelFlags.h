#pragma once
#include "CoreMinimal.h"
#include "EChaosVDQueryFastDataParallelFlags.generated.h"

UENUM(BlueprintType)
enum class EChaosVDQueryFastDataParallelFlags : uint8 {
    None,
    Parallel0,
    Parallel1,
    Parallel2 = 4,
};

