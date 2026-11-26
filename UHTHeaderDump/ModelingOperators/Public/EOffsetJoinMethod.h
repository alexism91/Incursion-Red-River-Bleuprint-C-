#pragma once
#include "CoreMinimal.h"
#include "EOffsetJoinMethod.generated.h"

UENUM(BlueprintType)
enum class EOffsetJoinMethod : uint8 {
    Square,
    Miter,
    Round,
};

