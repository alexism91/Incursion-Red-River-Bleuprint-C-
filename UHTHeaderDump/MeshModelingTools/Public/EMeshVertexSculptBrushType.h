#pragma once
#include "CoreMinimal.h"
#include "EMeshVertexSculptBrushType.generated.h"

UENUM(BlueprintType)
enum class EMeshVertexSculptBrushType : uint8 {
    Move,
    PullKelvin,
    PullSharpKelvin,
    Smooth,
    SmoothFill,
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
    EraseSculptLayer,
    LastValue,
};

