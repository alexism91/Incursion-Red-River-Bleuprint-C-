#pragma once
#include "CoreMinimal.h"
#include "EDisplaceMeshToolDisplaceType.generated.h"

UENUM(BlueprintType)
enum class EDisplaceMeshToolDisplaceType : uint8 {
    Constant,
    DisplacementMap,
    RandomNoise,
    PerlinNoise,
    SineWave,
};

