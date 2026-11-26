#pragma once
#include "CoreMinimal.h"
#include "EMaterialShaderFrequency.generated.h"

UENUM(BlueprintType, Flags)
enum class EMaterialShaderFrequency : uint8 {
    Vertex = 1,
    Pixel = 8,
    Compute = 32,
    Any = 41,
};

