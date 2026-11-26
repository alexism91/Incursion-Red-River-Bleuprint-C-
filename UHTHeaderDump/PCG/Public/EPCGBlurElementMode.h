#pragma once
#include "CoreMinimal.h"
#include "EPCGBlurElementMode.generated.h"

UENUM()
enum class EPCGBlurElementMode : int32 {
    Constant,
    Linear,
    Gaussian,
};

