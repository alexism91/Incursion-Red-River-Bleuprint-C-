#pragma once
#include "CoreMinimal.h"
#include "EDynamicMeshSculptBrushType.generated.h"

UENUM(BlueprintType)
enum class EDynamicMeshSculptBrushType : uint8 {
    Move,
    PullKelvin,
    PullSharpKelvin,
    Smooth,
    Offset,
    SculptView,
    SculptMax,
    Inflate,
    ScaleKelvin,
    Pinch,
    TwistKelvin,
    Flatten,
    Plane,
    PlaneViewAligned,
    FixedPlane,
    Resample,
    LastValue,
};

