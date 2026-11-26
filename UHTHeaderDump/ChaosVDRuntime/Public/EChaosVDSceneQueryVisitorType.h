#pragma once
#include "CoreMinimal.h"
#include "EChaosVDSceneQueryVisitorType.generated.h"

UENUM()
enum class EChaosVDSceneQueryVisitorType : int32 {
    Invalid,
    BroadPhase,
    NarrowPhase,
};

