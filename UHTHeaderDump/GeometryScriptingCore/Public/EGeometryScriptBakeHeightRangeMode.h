#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptBakeHeightRangeMode.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptBakeHeightRangeMode : uint8 {
    Absolute,
    RelativeBounds,
};

