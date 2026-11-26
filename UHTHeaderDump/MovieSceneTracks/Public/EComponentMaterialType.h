#pragma once
#include "CoreMinimal.h"
#include "EComponentMaterialType.generated.h"

UENUM(BlueprintType)
enum class EComponentMaterialType : uint8 {
    Empty,
    IndexedMaterial,
    OverlayMaterial,
    DecalMaterial,
    VolumetricCloudMaterial,
};

