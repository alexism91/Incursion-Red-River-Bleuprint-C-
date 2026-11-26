#pragma once
#include "CoreMinimal.h"
#include "EOcclusionTriangleSamplingUIMode.generated.h"

UENUM(BlueprintType)
enum class EOcclusionTriangleSamplingUIMode : uint8 {
    Vertices,
    VerticesAndCentroids,
};

