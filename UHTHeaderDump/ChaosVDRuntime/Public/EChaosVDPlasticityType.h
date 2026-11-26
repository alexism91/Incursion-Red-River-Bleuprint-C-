#pragma once
#include "CoreMinimal.h"
#include "EChaosVDPlasticityType.generated.h"

UENUM()
enum class EChaosVDPlasticityType : int32 {
    Free,
    Shrink,
    Grow,
};

