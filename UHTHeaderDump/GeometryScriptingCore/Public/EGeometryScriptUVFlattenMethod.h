#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptUVFlattenMethod.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptUVFlattenMethod : uint8 {
    ExpMap,
    Conformal,
    SpectralConformal,
};

