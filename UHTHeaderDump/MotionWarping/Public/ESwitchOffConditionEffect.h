#pragma once
#include "CoreMinimal.h"
#include "ESwitchOffConditionEffect.generated.h"

UENUM(BlueprintType)
enum class ESwitchOffConditionEffect : uint8 {
    CancelFollow,
    CancelWarping,
    PauseWarping,
    PauseRootMotion,
};

