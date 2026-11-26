#pragma once
#include "CoreMinimal.h"
#include "ESplitMeshesMethod.generated.h"

UENUM(BlueprintType)
enum class ESplitMeshesMethod : uint8 {
    ByMeshTopology,
    ByVertexOverlap,
    ByMaterialID,
    ByPolyGroup,
};

