#pragma once
#include "CoreMinimal.h"
#include "EChaosVDJointForceMode.generated.h"

UENUM()
enum class EChaosVDJointForceMode : int32 {
    Acceleration,
    Force,
};

