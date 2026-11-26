#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptMeshSelectionType.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptMeshSelectionType : uint8 {
    Vertices,
    Edges = 3,
    Triangles = 1,
    Polygroups,
};

