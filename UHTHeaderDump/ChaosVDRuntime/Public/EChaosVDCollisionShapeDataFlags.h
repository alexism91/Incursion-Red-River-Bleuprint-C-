#pragma once
#include "CoreMinimal.h"
#include "EChaosVDCollisionShapeDataFlags.generated.h"

UENUM(BlueprintType)
enum class EChaosVDCollisionShapeDataFlags : uint8 {
    None,
    SimCollision,
    QueryCollision,
    IsProbe = 4,
};

