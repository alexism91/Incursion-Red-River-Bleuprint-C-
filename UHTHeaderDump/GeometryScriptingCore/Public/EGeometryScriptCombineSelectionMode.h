#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptCombineSelectionMode.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptCombineSelectionMode : uint8 {
    Add,
    Subtract,
    Intersection,
};

