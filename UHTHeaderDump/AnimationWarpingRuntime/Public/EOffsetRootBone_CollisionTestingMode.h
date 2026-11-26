#pragma once
#include "CoreMinimal.h"
#include "EOffsetRootBone_CollisionTestingMode.generated.h"

UENUM(BlueprintType)
enum class EOffsetRootBone_CollisionTestingMode : uint8 {
    Disabled,
    ShrinkMaxTranslation,
    PlanarCollision,
};

