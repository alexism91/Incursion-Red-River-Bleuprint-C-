#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptPixelSamplingMethod.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptPixelSamplingMethod : uint8 {
    Bilinear,
    Nearest,
};

