#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptPolygonFillMode.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptPolygonFillMode : uint8 {
    All,
    Solid,
    PositiveWinding,
    NonZeroWinding,
    NegativeWinding,
    OddWinding,
};

