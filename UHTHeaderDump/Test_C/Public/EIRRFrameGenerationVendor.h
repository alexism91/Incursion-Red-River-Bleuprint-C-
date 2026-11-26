#pragma once
#include "CoreMinimal.h"
#include "EIRRFrameGenerationVendor.generated.h"

UENUM(BlueprintType)
enum class EIRRFrameGenerationVendor : uint8 {
    None,
    DLSS,
    FSR,
    XeSS,
};

