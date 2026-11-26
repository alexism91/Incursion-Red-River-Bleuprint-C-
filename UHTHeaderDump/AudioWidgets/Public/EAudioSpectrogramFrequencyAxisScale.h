#pragma once
#include "CoreMinimal.h"
#include "EAudioSpectrogramFrequencyAxisScale.generated.h"

UENUM(BlueprintType)
enum class EAudioSpectrogramFrequencyAxisScale : uint8 {
    Linear,
    Logarithmic,
};

