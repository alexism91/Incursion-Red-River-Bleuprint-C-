#pragma once
#include "CoreMinimal.h"
#include "EAggCollisionShape.generated.h"

UENUM(BlueprintType)
namespace EAggCollisionShape {
    enum Type {
        Sphere,
        Box,
        Sphyl,
        Convex,
        TaperedCapsule,
        LevelSet,
        SkinnedLevelSet,
        MLLevelSet,
        SkinnedTriangleMesh,
        Unknown,
    };
}

