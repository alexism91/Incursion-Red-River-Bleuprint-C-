#pragma once
#include "CoreMinimal.h"
#include "EDrawPolyPathExtrudeMode.generated.h"

UENUM()
enum class EDrawPolyPathExtrudeMode : int32 {
    Flat,
    Fixed,
    Interactive,
    RampFixed,
    RampInteractive,
};

