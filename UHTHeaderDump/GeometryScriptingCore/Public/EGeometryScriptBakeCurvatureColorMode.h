#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptBakeCurvatureColorMode.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptBakeCurvatureColorMode : uint8 {
    Grayscale,
    RedBlue,
    RedGreenBlue,
};

