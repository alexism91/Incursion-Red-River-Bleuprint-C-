#pragma once
#include "CoreMinimal.h"
#include "EOptimusValueUsage.generated.h"

UENUM(BlueprintType)
enum class EOptimusValueUsage : uint8 {
    None,
    CPU,
    GPU,
};

