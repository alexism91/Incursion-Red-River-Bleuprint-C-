#pragma once
#include "CoreMinimal.h"
#include "EIRRVisTestMode.generated.h"

UENUM(BlueprintType)
enum class EIRRVisTestMode : uint8 {
    VisibilityGrid,
    PathExposure,
    Both,
};

