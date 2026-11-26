#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptUniformRemeshTargetType.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptUniformRemeshTargetType : uint8 {
    TriangleCount,
    TargetEdgeLength,
};

