#pragma once
#include "CoreMinimal.h"
#include "EFixTinyGeoGeometrySelectionMethod.generated.h"

UENUM(BlueprintType)
enum class EFixTinyGeoGeometrySelectionMethod : uint8 {
    VolumeCubeRoot,
    RelativeVolume,
};

