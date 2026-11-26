#pragma once
#include "CoreMinimal.h"
#include "EAudioSpectrogramFrequencyAxisPixelBucketMode.generated.h"

UENUM(BlueprintType)
enum class EAudioSpectrogramFrequencyAxisPixelBucketMode : uint8 {
    Sample,
    Peak,
    Average,
};

