#pragma once
#include "CoreMinimal.h"
#include "EPCGPointNativeProperties.generated.h"

UENUM()
enum class EPCGPointNativeProperties : uint32 {
    None,
    Transform,
    Density,
    BoundsMin = 4,
    BoundsMax = 8,
    Color = 16,
    Steepness = 32,
    Seed = 64,
    MetadataEntry = 128,
    All = 255,
};

