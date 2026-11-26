#pragma once
#include "CoreMinimal.h"
#include "EAudioSpectrumPlotFrequencyAxisPixelBucketMode.generated.h"

UENUM(BlueprintType)
enum class EAudioSpectrumPlotFrequencyAxisPixelBucketMode : uint8 {
    Sample,
    Peak,
    Average,
};

