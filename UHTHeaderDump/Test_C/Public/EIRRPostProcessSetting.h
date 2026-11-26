#pragma once
#include "CoreMinimal.h"
#include "EIRRPostProcessSetting.generated.h"

UENUM(BlueprintType)
enum class EIRRPostProcessSetting : uint8 {
    Saturation,
    Contrast,
    Gamma,
};

