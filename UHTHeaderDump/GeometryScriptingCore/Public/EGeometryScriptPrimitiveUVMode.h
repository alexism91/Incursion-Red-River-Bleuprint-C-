#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptPrimitiveUVMode.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptPrimitiveUVMode : uint8 {
    Uniform,
    ScaleToFill,
};

