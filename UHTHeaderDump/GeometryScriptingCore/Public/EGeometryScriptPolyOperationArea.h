#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptPolyOperationArea.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptPolyOperationArea : uint8 {
    EntireSelection,
    PerPolygroup,
    PerTriangle,
};

