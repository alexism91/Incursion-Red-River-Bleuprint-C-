#pragma once
#include "CoreMinimal.h"
#include "EIRRScalabilityGroup.generated.h"

UENUM(BlueprintType)
enum class EIRRScalabilityGroup : uint8 {
    Overall,
    ViewDistance,
    AntiAliasing,
    Shadow,
    GlobalIllumination,
    Reflection,
    PostProcess,
    Texture,
    VisualEffect,
    Foliage,
    Shading,
};

