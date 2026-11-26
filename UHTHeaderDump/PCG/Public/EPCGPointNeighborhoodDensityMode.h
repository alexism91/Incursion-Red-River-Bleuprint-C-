#pragma once
#include "CoreMinimal.h"
#include "EPCGPointNeighborhoodDensityMode.generated.h"

UENUM()
enum class EPCGPointNeighborhoodDensityMode : int32 {
    None,
    SetNormalizedDistanceToDensity,
    SetAverageDensity,
};

