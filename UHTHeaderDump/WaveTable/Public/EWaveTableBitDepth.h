#pragma once
#include "CoreMinimal.h"
#include "EWaveTableBitDepth.generated.h"

UENUM(BlueprintType)
enum class EWaveTableBitDepth : uint8 {
    PCM_16,
    IEEE_Float,
    COUNT,
};

