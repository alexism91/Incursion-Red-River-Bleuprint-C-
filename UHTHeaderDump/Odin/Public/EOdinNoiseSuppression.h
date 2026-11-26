#pragma once
#include "CoreMinimal.h"
#include "EOdinNoiseSuppression.generated.h"

UENUM(BlueprintType)
enum EOdinNoiseSuppression {
    ODIN_NOISE_SUPPRESSION_NONE,
    ODIN_NOISE_SUPPRESSION_LOW,
    ODIN_NOISE_SUPPRESSION_MODERATE,
    ODIN_NOISE_SUPPRESSION_HIGH,
    ODIN_NOISE_SUPPRESSION_VERY_HIGH,
};

