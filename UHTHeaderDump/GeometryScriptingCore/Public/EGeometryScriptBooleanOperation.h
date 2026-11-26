#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptBooleanOperation.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptBooleanOperation : uint8 {
    Union,
    Intersection,
    Subtract,
    TrimInside,
    TrimOutside,
    NewPolyGroupInside,
    NewPolyGroupOutside,
};

