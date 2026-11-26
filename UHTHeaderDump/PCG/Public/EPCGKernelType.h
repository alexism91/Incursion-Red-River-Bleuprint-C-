#pragma once
#include "CoreMinimal.h"
#include "EPCGKernelType.generated.h"

UENUM(BlueprintType)
enum class EPCGKernelType : uint8 {
    PointProcessor,
    PointGenerator,
    TextureProcessor,
    TextureGenerator,
    Custom,
};

