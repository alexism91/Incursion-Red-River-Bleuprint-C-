#pragma once
#include "CoreMinimal.h"
#include "ECollisionGeometryType.generated.h"

UENUM()
enum class ECollisionGeometryType : int32 {
    CopyFromInputs,
    AlignedBoxes,
    OrientedBoxes,
    MinimalSpheres,
    Capsules,
    ConvexHulls,
    ConvexDecompositions = 8,
    SweptHulls = 6,
    LevelSets,
    MinVolume = 10,
    Empty,
};

