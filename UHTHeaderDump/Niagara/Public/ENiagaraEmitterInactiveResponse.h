#pragma once
#include "CoreMinimal.h"
#include "ENiagaraEmitterInactiveResponse.generated.h"

UENUM(BlueprintType)
enum class ENiagaraEmitterInactiveResponse : uint8 {
    Complete,
    Kill,
};

