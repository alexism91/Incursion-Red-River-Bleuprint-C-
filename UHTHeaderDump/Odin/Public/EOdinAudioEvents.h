#pragma once
#include "CoreMinimal.h"
#include "EOdinAudioEvents.generated.h"

UENUM(BlueprintType)
enum class EOdinAudioEvents : uint8 {
    NONE,
    AUDIO_EVENTS_IS_SILENT_CHANGED,
    AUDIO_EVENTS_POSITIONS_CHANGED,
    AUDIO_EVENTS_ALL = 255,
};

