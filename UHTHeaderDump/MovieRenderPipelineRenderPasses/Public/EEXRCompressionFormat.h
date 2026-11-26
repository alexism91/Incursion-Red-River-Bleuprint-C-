#pragma once
#include "CoreMinimal.h"
#include "EEXRCompressionFormat.generated.h"

UENUM(BlueprintType)
enum class EEXRCompressionFormat : uint8 {
    None,
    RLE,
    ZIPS,
    ZIP,
    PIZ,
    PXR24,
    B44,
    B44A,
    DWAA,
    DWAB,
    Max,
};

