#pragma once
#include "CoreMinimal.h"
#include "EOptimusPinMutability.generated.h"

UENUM(BlueprintType)
enum class EOptimusPinMutability : uint8 {
    Undefined,
    Immutable,
    Mutable,
};

