#pragma once
#include "CoreMinimal.h"
#include "EChaosVDJointMotionType.generated.h"

UENUM()
enum class EChaosVDJointMotionType : int32 {
    Free,
    Limited,
    Locked,
};

