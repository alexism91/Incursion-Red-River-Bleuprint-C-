#pragma once
#include "CoreMinimal.h"
#include "EVTProducerPriority.generated.h"

UENUM(BlueprintType)
enum class EVTProducerPriority : uint8 {
    Lowest,
    Lower,
    Low,
    BelowNormal,
    Normal,
    AboveNormal,
    High,
    Highest,
    Count,
};

