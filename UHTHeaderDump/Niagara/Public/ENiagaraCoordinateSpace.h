#pragma once
#include "CoreMinimal.h"
#include "ENiagaraCoordinateSpace.generated.h"

UENUM()
enum class ENiagaraCoordinateSpace : uint32 {
    Simulation,
    World,
    Local,
};

