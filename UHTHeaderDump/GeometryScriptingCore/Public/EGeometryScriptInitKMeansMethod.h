#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptInitKMeansMethod.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptInitKMeansMethod : uint8 {
    Random,
    UniformSpacing,
};

