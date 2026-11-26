#pragma once
#include "CoreMinimal.h"
#include "EMeshInspectorToolDrawIndexMode.generated.h"

UENUM(BlueprintType)
enum class EMeshInspectorToolDrawIndexMode : uint8 {
    None,
    VertexID,
    TriangleID,
    GroupID,
    EdgeID,
};

