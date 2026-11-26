#pragma once
#include "CoreMinimal.h"
#include "EDerivativeStatus.generated.h"

UENUM(BlueprintType)
enum class EDerivativeStatus : uint8 {
    NotAware,
    NotValid,
    Zero,
    Valid,
};

