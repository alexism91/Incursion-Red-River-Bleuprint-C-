#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptRemeshEdgeConstraintType.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptRemeshEdgeConstraintType : uint8 {
    Fixed,
    Refine,
    Free,
    Ignore,
};

