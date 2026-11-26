#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataVectorOperation.generated.h"

UENUM()
enum class EPCGMetadataVectorOperation : uint16 {
    VectorOp,
    Cross,
    Dot,
    Distance,
    Normalize,
    Length,
    RotateAroundAxis,
    TransformOp = 100,
    TransformDirection,
    TransformLocation,
    InverseTransformDirection,
    InverseTransformLocation,
};

