#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptTexelDensityMode.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptTexelDensityMode : uint8 {
    ApplyToIslands,
    ApplyToWhole,
    Normalize,
};

