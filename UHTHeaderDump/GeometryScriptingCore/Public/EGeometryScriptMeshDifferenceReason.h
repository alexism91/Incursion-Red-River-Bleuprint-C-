#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptMeshDifferenceReason.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptMeshDifferenceReason : uint8 {
    Unknown,
    VertexCount,
    TriangleCount,
    EdgeCount,
    Vertex,
    Triangle,
    Edge,
    Connectivity,
    Normal,
    Color,
    UV,
    Group,
    Attribute,
};

