#pragma once
#include "CoreMinimal.h"
#include "EBakeCurvatureColorMode.generated.h"

UENUM()
enum class EBakeCurvatureColorMode : int32 {
    Grayscale,
    RedBlue,
    RedGreenBlue,
};

