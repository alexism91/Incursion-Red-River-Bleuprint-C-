#pragma once
#include "CoreMinimal.h"
#include "EChaosVDSceneQueryType.generated.h"

UENUM()
enum class EChaosVDSceneQueryType : int32 {
    Invalid,
    Sweep,
    Overlap,
    RayCast,
};

