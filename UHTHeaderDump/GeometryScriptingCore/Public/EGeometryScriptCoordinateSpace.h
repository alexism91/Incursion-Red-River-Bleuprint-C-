#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptCoordinateSpace.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptCoordinateSpace : uint8 {
    Local,
    World,
};

