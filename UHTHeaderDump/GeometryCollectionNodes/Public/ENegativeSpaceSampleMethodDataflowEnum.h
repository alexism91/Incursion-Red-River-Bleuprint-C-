#pragma once
#include "CoreMinimal.h"
#include "ENegativeSpaceSampleMethodDataflowEnum.generated.h"

UENUM(BlueprintType)
enum class ENegativeSpaceSampleMethodDataflowEnum : uint8 {
    Uniform,
    VoxelSearch,
    NavigableVoxelSearch,
};

