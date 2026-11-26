#pragma once
#include "CoreMinimal.h"
#include "EInterchangeMaterialXBSDF.generated.h"

UENUM(BlueprintType)
enum class EInterchangeMaterialXBSDF : uint8 {
    OrenNayarDiffuse,
    BurleyDiffuse,
    Translucent,
    Dielectric,
    Conductor,
    GeneralizedSchlick,
    Subsurface,
    Sheen,
    ThinFilm,
    MaxBSDFCount,
};

