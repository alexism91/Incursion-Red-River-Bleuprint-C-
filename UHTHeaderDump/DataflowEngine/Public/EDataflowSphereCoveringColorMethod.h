#pragma once
#include "CoreMinimal.h"
#include "EDataflowSphereCoveringColorMethod.generated.h"

UENUM(BlueprintType)
enum class EDataflowSphereCoveringColorMethod : uint8 {
    Single,
    ColorByRadius,
    Random,
};

