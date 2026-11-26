#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptBakeTypes.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptBakeTypes : uint8 {
    None,
    TangentSpaceNormal,
    ObjectSpaceNormal,
    FaceNormal,
    BentNormal,
    Position,
    Curvature,
    AmbientOcclusion,
    Texture,
    MultiTexture,
    VertexColor,
    MaterialID,
    Constant,
    UVShell,
    Height,
};

