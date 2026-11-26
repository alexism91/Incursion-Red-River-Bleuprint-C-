#pragma once
#include "CoreMinimal.h"
#include "EOdinMuteEffectOptions.generated.h"

UENUM(BlueprintType)
enum class EOdinMuteEffectOptions : uint8 {
    ODIN_EFFECT_TOGGLE_OFF,
    ODIN_EFFECT_TOGGLE_ON,
    ODIN_EFFECT_TOGGLE_UNCHANGED,
};

