#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptBakeOutputMode.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptBakeOutputMode : uint8 {
    RGBA,
    PerChannel,
};

