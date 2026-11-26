#pragma once
#include "CoreMinimal.h"
#include "EIRRSpectatorViewMode.generated.h"

UENUM(BlueprintType)
enum class EIRRSpectatorViewMode : uint8 {
    Helmet,
    Sensor,
    Chase,
};

