#pragma once
#include "CoreMinimal.h"
#include "EEBAtmosphereType.generated.h"

UENUM(BlueprintType)
enum class EEBAtmosphereType : uint8 {
    AT_Constant,
    AT_Curve,
    AT_Earth,
};

