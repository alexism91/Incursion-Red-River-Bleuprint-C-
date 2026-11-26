#pragma once
#include "CoreMinimal.h"
#include "EBakeCurvatureTypeMode.generated.h"

UENUM()
enum class EBakeCurvatureTypeMode : int32 {
    MeanAverage,
    Max,
    Min,
    Gaussian,
};

