#pragma once
#include "CoreMinimal.h"
#include "EPCGMatchMaxDistanceMode.generated.h"

UENUM()
enum class EPCGMatchMaxDistanceMode : int32 {
    NoMaxDistance,
    UseConstantMaxDistance,
    AttributeMaxDistance,
};

