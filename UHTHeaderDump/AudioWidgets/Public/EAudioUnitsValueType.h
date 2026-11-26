#pragma once
#include "CoreMinimal.h"
#include "EAudioUnitsValueType.generated.h"

UENUM(BlueprintType)
enum class EAudioUnitsValueType : uint8 {
    Linear,
    Frequency,
    Volume,
};

