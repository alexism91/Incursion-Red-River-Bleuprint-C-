#pragma once
#include "CoreMinimal.h"
#include "EChaosVDMidPhaseType.generated.h"

UENUM()
enum class EChaosVDMidPhaseType : int8 {
    Generic,
    ShapePair,
    SphereApproximation,
    Unknown,
};

