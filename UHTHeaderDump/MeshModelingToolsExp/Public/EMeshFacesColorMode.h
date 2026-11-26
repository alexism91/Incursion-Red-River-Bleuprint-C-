#pragma once
#include "CoreMinimal.h"
#include "EMeshFacesColorMode.generated.h"

UENUM()
enum class EMeshFacesColorMode : int32 {
    None,
    ByGroup,
    ByMaterialID,
    ByUVIsland,
};

