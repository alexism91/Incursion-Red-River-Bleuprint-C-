#pragma once
#include "CoreMinimal.h"
#include "ENiagaraCompileErrorSeverity.generated.h"

UENUM(BlueprintType)
enum class ENiagaraCompileErrorSeverity : uint8 {
    Ignore,
    LogOnly,
    Warning,
    Error,
};

