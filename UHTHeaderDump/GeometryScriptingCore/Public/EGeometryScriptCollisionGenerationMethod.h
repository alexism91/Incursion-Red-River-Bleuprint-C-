#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptCollisionGenerationMethod.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptCollisionGenerationMethod : uint8 {
    AlignedBoxes,
    OrientedBoxes,
    MinimalSpheres,
    Capsules,
    ConvexHulls,
    SweptHulls,
    MinVolumeShapes,
    LevelSets,
};

