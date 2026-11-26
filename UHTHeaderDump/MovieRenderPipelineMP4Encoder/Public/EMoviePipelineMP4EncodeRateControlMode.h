#pragma once
#include "CoreMinimal.h"
#include "EMoviePipelineMP4EncodeRateControlMode.generated.h"

UENUM(BlueprintType)
enum class EMoviePipelineMP4EncodeRateControlMode : uint8 {
    ConstantQP,
    Quality,
    VariableBitRate,
    VariableBitRate_Constrained,
    ConstantBitRate,
};

