#pragma once
#include "CoreMinimal.h"
#include "ENSM_ShapePrimitive.generated.h"

UENUM(BlueprintType)
enum class ENSM_ShapePrimitive : uint8 {
    Box,
    Cylinder,
    Plane,
    Ring,
    Sphere,
    Max,
};

