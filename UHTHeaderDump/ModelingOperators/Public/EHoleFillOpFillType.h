#pragma once
#include "CoreMinimal.h"
#include "EHoleFillOpFillType.generated.h"

UENUM(BlueprintType)
enum class EHoleFillOpFillType : uint8 {
    TriangleFan,
    PolygonEarClipping,
    Planar,
    Minimal,
    Smooth,
};

