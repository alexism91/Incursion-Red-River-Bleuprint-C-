#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptRemeshSmoothingType.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptRemeshSmoothingType : uint8 {
    Uniform,
    UVPreserving,
    Mixed,
};

