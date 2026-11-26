#pragma once
#include "CoreMinimal.h"
#include "ECollectionBakeTextureAttribute.generated.h"

UENUM()
enum class ECollectionBakeTextureAttribute : int32 {
    None,
    DistanceToExternal,
    AmbientOcclusion,
    Curvature,
    NormalX,
    NormalY,
    NormalZ,
    PositionX,
    PositionY,
    PositionZ,
};

