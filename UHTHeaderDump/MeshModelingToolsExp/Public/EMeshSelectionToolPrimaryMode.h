#pragma once
#include "CoreMinimal.h"
#include "EMeshSelectionToolPrimaryMode.generated.h"

UENUM()
enum class EMeshSelectionToolPrimaryMode : int32 {
    Brush,
    VolumetricBrush,
    AngleFiltered,
    Visible,
    AllConnected,
    AllInGroup,
    ByMaterial,
    ByMaterialAll,
    ByUVIsland,
    AllWithinAngle,
};

