#pragma once
#include "CoreMinimal.h"
#include "EAudioSpectrumPlotFrequencyAxisScale.generated.h"

UENUM(BlueprintType)
enum class EAudioSpectrumPlotFrequencyAxisScale : uint8 {
    Linear,
    Logarithmic,
};

