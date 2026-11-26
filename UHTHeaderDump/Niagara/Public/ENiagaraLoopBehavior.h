#pragma once
#include "CoreMinimal.h"
#include "ENiagaraLoopBehavior.generated.h"

UENUM(BlueprintType)
enum class ENiagaraLoopBehavior : uint8 {
    Infinite,
    Multiple,
    Once,
};

