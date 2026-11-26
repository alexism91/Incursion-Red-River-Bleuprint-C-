#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptBakeResolution.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptBakeResolution : uint8 {
    Resolution16,
    Resolution32,
    Resolution64,
    Resolution128,
    Resolution256,
    Resolution512,
    Resolution1024,
    Resolution2048,
    Resolution4096,
    Resolution8192,
};

