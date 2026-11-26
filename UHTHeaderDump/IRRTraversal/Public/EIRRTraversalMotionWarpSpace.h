#pragma once
#include "CoreMinimal.h"
#include "EIRRTraversalMotionWarpSpace.generated.h"

UENUM(BlueprintType)
enum class EIRRTraversalMotionWarpSpace : uint8 {
    WallStartSpace,
    WallEndSpace,
    WallLandSpace,
    WallStartCharacterHeight,
    CharacterProjectedOnWall,
};

