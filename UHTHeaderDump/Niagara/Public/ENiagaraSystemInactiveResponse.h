#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSystemInactiveResponse.generated.h"

UENUM(BlueprintType)
enum class ENiagaraSystemInactiveResponse : uint8 {
    Complete,
    Kill,
};

