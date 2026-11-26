#pragma once
#include "CoreMinimal.h"
#include "ENSM_VelocityType.generated.h"

UENUM()
enum class ENSM_VelocityType : int32 {
    Linear,
    FromPoint,
    InCone,
};

