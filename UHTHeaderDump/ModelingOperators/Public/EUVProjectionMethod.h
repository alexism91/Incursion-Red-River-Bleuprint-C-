#pragma once
#include "CoreMinimal.h"
#include "EUVProjectionMethod.generated.h"

UENUM(BlueprintType)
enum class EUVProjectionMethod : uint8 {
    Box,
    Cylinder,
    Plane,
    ExpMap,
};

