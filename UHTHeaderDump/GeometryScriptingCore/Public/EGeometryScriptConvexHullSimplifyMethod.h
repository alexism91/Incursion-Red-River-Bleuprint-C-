#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptConvexHullSimplifyMethod.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptConvexHullSimplifyMethod : uint8 {
    MeshQSlim,
    AngleTolerance,
};

