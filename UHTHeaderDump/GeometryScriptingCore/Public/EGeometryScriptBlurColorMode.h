#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptBlurColorMode.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptBlurColorMode : uint8 {
    Uniform,
    EdgeLength,
    CotanWeights,
};

