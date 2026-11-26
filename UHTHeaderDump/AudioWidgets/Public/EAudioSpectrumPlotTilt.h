#pragma once
#include "CoreMinimal.h"
#include "EAudioSpectrumPlotTilt.generated.h"

UENUM(BlueprintType)
enum class EAudioSpectrumPlotTilt : uint8 {
    NoTilt,
    Plus1_5dBPerOctave,
    Plus3dBPerOctave,
    Plus4_5dBPerOctave,
    Plus6dBPerOctave,
};

