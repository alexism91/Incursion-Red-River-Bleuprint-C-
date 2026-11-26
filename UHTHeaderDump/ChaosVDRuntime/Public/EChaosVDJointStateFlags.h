#pragma once
#include "CoreMinimal.h"
#include "EChaosVDJointStateFlags.generated.h"

UENUM(BlueprintType)
enum class EChaosVDJointStateFlags : uint8 {
    None,
    Disabled,
    Broken,
    Breaking = 4,
    DriveTargetChanged = 8,
    EnabledDuringResim = 16,
};

