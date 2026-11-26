#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptGridSizingMethod.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptGridSizingMethod : uint8 {
    GridCellSize,
    GridResolution,
};

