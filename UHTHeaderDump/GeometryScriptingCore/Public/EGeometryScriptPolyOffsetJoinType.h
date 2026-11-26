#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptPolyOffsetJoinType.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptPolyOffsetJoinType : uint8 {
    Square,
    Round,
    Miter,
};

