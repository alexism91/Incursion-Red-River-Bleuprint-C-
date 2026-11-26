#pragma once
#include "CoreMinimal.h"
#include "EFlareProfileType.generated.h"

UENUM()
enum class EFlareProfileType : int8 {
    SinMode,
    SinSquaredMode,
    TriangleMode,
};

