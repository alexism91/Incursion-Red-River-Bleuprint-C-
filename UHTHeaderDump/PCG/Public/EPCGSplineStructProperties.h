#pragma once
#include "CoreMinimal.h"
#include "EPCGSplineStructProperties.generated.h"

UENUM(BlueprintType)
enum class EPCGSplineStructProperties : uint8 {
    Position,
    Rotation,
    Scale,
    Transform,
    ArriveTangent,
    LeaveTangent,
    InterpType,
    LocalPosition,
    LocalRotation,
    LocalScale,
    LocalTransform,
};

