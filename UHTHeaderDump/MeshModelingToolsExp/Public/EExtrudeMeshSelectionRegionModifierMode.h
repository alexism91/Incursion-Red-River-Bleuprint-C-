#pragma once
#include "CoreMinimal.h"
#include "EExtrudeMeshSelectionRegionModifierMode.generated.h"

UENUM(BlueprintType)
enum class EExtrudeMeshSelectionRegionModifierMode : uint8 {
    OriginalShape,
    FlattenToPlane,
    RaycastToPlane,
};

