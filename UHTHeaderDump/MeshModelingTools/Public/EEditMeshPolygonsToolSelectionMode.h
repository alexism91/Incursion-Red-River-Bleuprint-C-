#pragma once
#include "CoreMinimal.h"
#include "EEditMeshPolygonsToolSelectionMode.generated.h"

UENUM(BlueprintType)
enum class EEditMeshPolygonsToolSelectionMode : uint8 {
    Faces,
    Edges,
    Vertices,
    Loops,
    Rings,
    FacesEdgesVertices,
};

