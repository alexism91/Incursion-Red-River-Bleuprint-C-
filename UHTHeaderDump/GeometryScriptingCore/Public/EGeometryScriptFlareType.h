#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptFlareType.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptFlareType : uint8 {
    SinMode,
    SinSquaredMode,
    TriangleMode,
};

