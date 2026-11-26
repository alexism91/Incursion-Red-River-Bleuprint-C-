#pragma once
#include "CoreMinimal.h"
#include "ENiagaraEmitterMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraEmitterMode : uint8 {
    Standard,
    Stateless,
};

