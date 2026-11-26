#pragma once
#include "CoreMinimal.h"
#include "EChaosVDGTJointStateFlags.generated.h"

UENUM(BlueprintType)
enum class EChaosVDGTJointStateFlags : uint8 {
    None,
    IsBreaking,
    IsBroken,
    DriveTargetChanged = 4,
    IsViolating = 8,
};

