#pragma once
#include "CoreMinimal.h"
#include "EPCGSphereGeneration.generated.h"

UENUM(BlueprintType)
enum class EPCGSphereGeneration : uint8 {
    Geodesic,
    Angle,
    Segments,
    Random,
    Poisson,
};

