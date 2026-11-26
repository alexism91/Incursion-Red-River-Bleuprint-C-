#pragma once
#include "CoreMinimal.h"
#include "EChaosVDAccelerationStructureType.generated.h"

UENUM()
enum class EChaosVDAccelerationStructureType : uint32 {
    BoundingVolume,
    AABBTree,
    AABBTreeBV,
    Collection,
    Unknown,
};

