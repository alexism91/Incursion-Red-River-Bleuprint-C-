#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptFillHolesMethod.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptFillHolesMethod : uint8 {
    Automatic,
    MinimalFill,
    PolygonTriangulation,
    TriangleFan,
    PlanarProjection,
};

