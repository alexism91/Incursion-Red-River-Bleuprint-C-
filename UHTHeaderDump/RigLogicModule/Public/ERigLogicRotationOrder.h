#pragma once
#include "CoreMinimal.h"
#include "ERigLogicRotationOrder.generated.h"

UENUM(BlueprintType)
enum class ERigLogicRotationOrder : uint8 {
    XYZ,
    XZY,
    YXZ,
    YZX,
    ZXY,
    ZYX,
};

