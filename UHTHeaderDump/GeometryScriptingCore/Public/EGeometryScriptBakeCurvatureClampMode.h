#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptBakeCurvatureClampMode.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptBakeCurvatureClampMode : uint8 {
    None,
    OnlyPositive,
    OnlyNegative,
};

