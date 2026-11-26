#pragma once
#include "CoreMinimal.h"
#include "EAkCodecId.generated.h"

UENUM(BlueprintType)
enum class EAkCodecId : uint8 {
    None,
    PCM,
    ADPCM,
    Vorbis = 4,
    ATRAC9 = 12,
    OpusNX = 17,
    AkOpus = 19,
    AkOpusWEM,
};

