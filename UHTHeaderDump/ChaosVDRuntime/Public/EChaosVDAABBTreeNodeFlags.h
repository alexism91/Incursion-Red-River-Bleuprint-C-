#pragma once
#include "CoreMinimal.h"
#include "EChaosVDAABBTreeNodeFlags.generated.h"

UENUM(BlueprintType)
enum class EChaosVDAABBTreeNodeFlags : uint8 {
    None,
    IsLeaf,
    IsDirty,
};

