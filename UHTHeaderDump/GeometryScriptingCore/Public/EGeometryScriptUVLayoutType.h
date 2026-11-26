#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptUVLayoutType.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptUVLayoutType : uint8 {
    Transform,
    Stack,
    Repack,
    Normalize,
};

