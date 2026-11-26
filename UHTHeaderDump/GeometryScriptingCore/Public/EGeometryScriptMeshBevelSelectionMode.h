#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptMeshBevelSelectionMode.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptMeshBevelSelectionMode : uint8 {
    TriangleArea,
    AllPolygroupEdges,
    SharedPolygroupEdges,
    SelectedEdges,
};

