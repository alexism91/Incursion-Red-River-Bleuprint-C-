#pragma once
#include "CoreMinimal.h"
#include "EChaosVDJointSyncType.generated.h"

UENUM()
enum class EChaosVDJointSyncType : int32 {
    InSync,
    HardDesync,
};

