#pragma once
#include "CoreMinimal.h"
#include "ENegativeSpaceSampleMethod.generated.h"

UENUM(BlueprintType)
enum class ENegativeSpaceSampleMethod : uint8 {
    Uniform,
    VoxelSearch,
    NavigableVoxelSearch,
};

