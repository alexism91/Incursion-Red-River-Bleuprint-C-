#pragma once
#include "CoreMinimal.h"
#include "ESensorType.generated.h"

UENUM(BlueprintType)
enum class ESensorType : uint8 {
    None,
    Active,
    Passive,
    Manual,
};

