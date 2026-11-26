#pragma once
#include "CoreMinimal.h"
#include "EMegaLightsShadowMethod.generated.h"

UENUM(BlueprintType)
namespace EMegaLightsShadowMethod {
    enum Type {
        Default,
        RayTracing,
        VirtualShadowMap,
    };
}

