#pragma once
#include "CoreMinimal.h"
#include "EChaosWeightMapTarget.generated.h"

UENUM(BlueprintType)
enum class EChaosWeightMapTarget : uint8 {
    None,
    MaxDistance,
    BackstopDistance,
    BackstopRadius,
    AnimDriveStiffness,
    TetherEndsMask = 201,
    AnimDriveDamping = 5,
    TetherStiffness,
    TetherScale,
    Drag,
    Lift,
    EdgeStiffness,
    BendingStiffness,
    AreaStiffness,
    BucklingStiffness,
    Pressure,
    FlatnessRatio,
    OuterDrag,
    OuterLift,
    MAX,
};

