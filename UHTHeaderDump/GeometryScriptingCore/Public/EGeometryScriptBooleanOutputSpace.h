#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptBooleanOutputSpace.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptBooleanOutputSpace : uint8 {
    TargetTransformSpace,
    ToolTransformSpace,
    SharedTransformSpace,
};

