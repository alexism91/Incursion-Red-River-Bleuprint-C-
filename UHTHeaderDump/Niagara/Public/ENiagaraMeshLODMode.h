#pragma once
#include "CoreMinimal.h"
#include "ENiagaraMeshLODMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraMeshLODMode : uint8 {
    LODLevel,
    LODBias,
    ByComponentBounds,
    ComponentOrigin,
    PerParticle,
};

