#pragma once
#include "CoreMinimal.h"
#include "ELatticeInterpolationType.generated.h"

UENUM(BlueprintType)
enum class ELatticeInterpolationType : uint8 {
    Linear,
    Cubic,
};

