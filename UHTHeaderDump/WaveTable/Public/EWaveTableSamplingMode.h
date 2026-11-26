#pragma once
#include "CoreMinimal.h"
#include "EWaveTableSamplingMode.generated.h"

UENUM(BlueprintType)
enum class EWaveTableSamplingMode : uint8 {
    FixedSampleRate,
    FixedResolution,
    COUNT,
};

