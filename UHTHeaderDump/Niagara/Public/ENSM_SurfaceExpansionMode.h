#pragma once
#include "CoreMinimal.h"
#include "ENSM_SurfaceExpansionMode.generated.h"

UENUM(BlueprintType)
enum class ENSM_SurfaceExpansionMode : uint8 {
    Inner,
    Centered,
    Outside,
};

