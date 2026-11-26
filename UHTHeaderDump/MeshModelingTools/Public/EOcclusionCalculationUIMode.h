#pragma once
#include "CoreMinimal.h"
#include "EOcclusionCalculationUIMode.generated.h"

UENUM(BlueprintType)
enum class EOcclusionCalculationUIMode : uint8 {
    GeneralizedWindingNumber,
    RaycastOcclusionSamples,
};

