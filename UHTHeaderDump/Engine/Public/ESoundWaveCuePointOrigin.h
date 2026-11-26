#pragma once
#include "CoreMinimal.h"
#include "ESoundWaveCuePointOrigin.generated.h"

UENUM(BlueprintType)
enum class ESoundWaveCuePointOrigin : uint8 {
    WaveFile,
    MarkerTransformation,
};

