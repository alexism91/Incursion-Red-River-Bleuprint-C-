#pragma once
#include "CoreMinimal.h"
#include "EIRRUpscaler.generated.h"

UENUM(BlueprintType)
enum class EIRRUpscaler : uint8 {
    None,
    FXAA,
    TAA,
    TSR,
    DLSS,
    FSR,
    XeSS,
};

