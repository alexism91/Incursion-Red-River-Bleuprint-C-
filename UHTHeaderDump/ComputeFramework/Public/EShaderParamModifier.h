#pragma once
#include "CoreMinimal.h"
#include "EShaderParamModifier.generated.h"

UENUM(BlueprintType)
enum class EShaderParamModifier : uint8 {
    None,
    In,
    Out,
    InOut,
};

