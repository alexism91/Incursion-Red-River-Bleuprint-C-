#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataRotatorOperation.generated.h"

UENUM()
enum class EPCGMetadataRotatorOperation : uint16 {
    RotatorOp,
    Combine,
    Invert,
    Lerp,
    Normalize,
    TransformOp = 100,
    TransformRotation,
    InverseTransformRotation,
};

