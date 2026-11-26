#pragma once
#include "CoreMinimal.h"
#include "EVTInvalidatePriority.generated.h"

UENUM(BlueprintType)
enum class EVTInvalidatePriority : uint8 {
    Normal,
    High,
    Count,
};

