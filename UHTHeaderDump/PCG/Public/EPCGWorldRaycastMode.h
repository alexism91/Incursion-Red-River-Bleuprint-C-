#pragma once
#include "CoreMinimal.h"
#include "EPCGWorldRaycastMode.generated.h"

UENUM(BlueprintType)
enum class EPCGWorldRaycastMode : uint8 {
    Infinite,
    ScaledVector,
    NormalizedWithLength,
    Segments,
};

