#pragma once
#include "CoreMinimal.h"
#include "EIRRUpscalerQuality.generated.h"

UENUM(BlueprintType)
enum class EIRRUpscalerQuality : uint8 {
    NativeAA,
    Quality,
    Balanced,
    Performance,
    UltraPerformance,
};

