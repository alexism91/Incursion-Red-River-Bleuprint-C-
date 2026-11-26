#pragma once
#include "CoreMinimal.h"
#include "EAudioSpectrumAnalyzerType.generated.h"

UENUM(BlueprintType)
enum class EAudioSpectrumAnalyzerType : uint8 {
    FFT,
    CQT,
};

