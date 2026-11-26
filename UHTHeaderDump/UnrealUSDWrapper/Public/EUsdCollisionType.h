#pragma once
#include "CoreMinimal.h"
#include "EUsdCollisionType.generated.h"

UENUM(BlueprintType)
enum class EUsdCollisionType : uint8 {
    None,
    ConvexDecomposition,
    ConvexHull,
    Sphere,
    Cube,
    MeshSimplification,
    Capsule,
    CustomMesh,
};

