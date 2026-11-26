#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneScalabilityConditionGroup.generated.h"

UENUM(BlueprintType)
enum class EMovieSceneScalabilityConditionGroup : uint8 {
    ViewDistance,
    AntiAliasing,
    Shadow,
    GlobalIllumination,
    Reflection,
    PostProcess,
    Texture,
    Effects,
    Foliage,
    Shading,
    Landscape,
};

