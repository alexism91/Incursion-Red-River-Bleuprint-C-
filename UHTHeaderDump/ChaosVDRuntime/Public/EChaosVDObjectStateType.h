#pragma once
#include "CoreMinimal.h"
#include "EChaosVDObjectStateType.generated.h"

UENUM()
enum class EChaosVDObjectStateType : int8 {
    Uninitialized,
    Sleeping,
    Kinematic,
    Static,
    Dynamic,
    Count,
};

