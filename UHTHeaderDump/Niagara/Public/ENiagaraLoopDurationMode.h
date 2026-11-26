#pragma once
#include "CoreMinimal.h"
#include "ENiagaraLoopDurationMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraLoopDurationMode : uint8 {
    Fixed,
    Infinite,
};

