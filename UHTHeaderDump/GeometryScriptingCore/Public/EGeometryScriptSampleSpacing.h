#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptSampleSpacing.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptSampleSpacing : uint8 {
    UniformDistance,
    UniformTime,
    ErrorTolerance,
};

