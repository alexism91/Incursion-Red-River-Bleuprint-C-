#pragma once
#include "CoreMinimal.h"
#include "EOdinEffectType.generated.h"

UENUM(BlueprintType)
enum class EOdinEffectType : uint8 {
    ODIN_EFFECT_TYPE_VAD,
    ODIN_EFFECT_TYPE_APM,
    ODIN_EFFECT_TYPE_VI,
    ODIN_EFFECT_TYPE_CUSTOM,
};

