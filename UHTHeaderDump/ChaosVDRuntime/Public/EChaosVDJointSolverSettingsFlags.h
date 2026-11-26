#pragma once
#include "CoreMinimal.h"
#include "EChaosVDJointSolverSettingsFlags.generated.h"

UENUM(BlueprintType)
enum class EChaosVDJointSolverSettingsFlags : uint8 {
    None,
    UseLinearSolver,
    SortEnabled,
    SolvePositionLast = 4,
    UsePositionBasedDrives = 8,
    EnableTwistLimits = 16,
    EnableSwingLimits = 32,
    EnableDrives = 64,
};

