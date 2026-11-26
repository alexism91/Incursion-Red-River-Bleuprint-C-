#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptLinearExtrudeDirection.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptLinearExtrudeDirection : uint8 {
    FixedDirection,
    AverageFaceNormal,
};

