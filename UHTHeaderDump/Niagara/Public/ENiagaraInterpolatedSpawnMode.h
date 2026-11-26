#pragma once
#include "CoreMinimal.h"
#include "ENiagaraInterpolatedSpawnMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraInterpolatedSpawnMode : uint8 {
    NoInterpolation,
    RunUpdateScript,
    Interpolation,
};

