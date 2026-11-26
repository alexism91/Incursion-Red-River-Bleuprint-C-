#pragma once
#include "CoreMinimal.h"
#include "ENiagaraLwcTileUpdateMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraLwcTileUpdateMode : uint8 {
    ResetSimulation,
    Rebase,
    RebaseOrResetSimulation,
};

