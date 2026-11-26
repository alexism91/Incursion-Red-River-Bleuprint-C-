#pragma once
#include "CoreMinimal.h"
#include "ETranslucencyType.generated.h"

UENUM(BlueprintType)
enum class ETranslucencyType : uint8 {
    Raster,
    RayTraced_Deprecated,
    RayTracing = RayTraced_Deprecated,
    RayTraced,
};

