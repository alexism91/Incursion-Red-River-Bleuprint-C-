#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptTangentTypes.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptTangentTypes : uint8 {
    FastMikkT,
    PerTriangle,
};

