#pragma once
#include "CoreMinimal.h"
#include "EFixTinyGeoNeighborSelectionMethod.generated.h"

UENUM(BlueprintType)
enum class EFixTinyGeoNeighborSelectionMethod : uint8 {
    LargestNeighbor,
    NearestCenter,
};

