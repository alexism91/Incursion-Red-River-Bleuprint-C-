#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptCombineAttributesMode.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptCombineAttributesMode : uint8 {
    EnableAllMatching,
    UseTarget,
    UseSource,
};

