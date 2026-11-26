#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptPrimitivePolygroupMode.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptPrimitivePolygroupMode : uint8 {
    SingleGroup,
    PerFace,
    PerQuad,
};

