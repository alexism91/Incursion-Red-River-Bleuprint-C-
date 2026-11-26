#pragma once
#include "CoreMinimal.h"
#include "EDataflowMeshSplitIslandsMethod.generated.h"

UENUM(BlueprintType)
enum class EDataflowMeshSplitIslandsMethod : uint8 {
    NoSplit,
    ByMeshTopology,
    ByVertexOverlap,
};

