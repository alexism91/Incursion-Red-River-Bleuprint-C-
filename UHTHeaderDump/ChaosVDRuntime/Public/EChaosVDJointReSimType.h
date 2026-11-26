#pragma once
#include "CoreMinimal.h"
#include "EChaosVDJointReSimType.generated.h"

UENUM()
enum class EChaosVDJointReSimType : int32 {
    FullResim,
    ResimAsFollower,
};

