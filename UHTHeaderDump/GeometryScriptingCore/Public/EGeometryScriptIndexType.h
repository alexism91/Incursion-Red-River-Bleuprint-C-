#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptIndexType.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptIndexType : uint8 {
    Any,
    Triangle,
    Edge,
    Vertex,
    MaterialID,
    PolygroupID,
};

