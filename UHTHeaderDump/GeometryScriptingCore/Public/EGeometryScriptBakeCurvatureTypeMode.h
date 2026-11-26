#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptBakeCurvatureTypeMode.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptBakeCurvatureTypeMode : uint8 {
    Mean,
    Max,
    Min,
    Gaussian,
};

