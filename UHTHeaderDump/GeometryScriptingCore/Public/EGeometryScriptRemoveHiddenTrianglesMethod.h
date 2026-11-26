#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptRemoveHiddenTrianglesMethod.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptRemoveHiddenTrianglesMethod : uint8 {
    FastWindingNumber,
    RaycastOcclusionTest,
};

