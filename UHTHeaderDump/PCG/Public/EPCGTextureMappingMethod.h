#pragma once
#include "CoreMinimal.h"
#include "EPCGTextureMappingMethod.generated.h"

UENUM(BlueprintType)
enum class EPCGTextureMappingMethod : uint8 {
    Planar,
    UVCoordinates,
};

