#pragma once
#include "CoreMinimal.h"
#include "EAudioOscilloscopeTriggerMode.generated.h"

UENUM(BlueprintType)
enum class EAudioOscilloscopeTriggerMode : uint8 {
    None,
    Rising,
    Falling,
};

