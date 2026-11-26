#pragma once
#include "CoreMinimal.h"
#include "EGameplayCueNotify_EffectPlaySpace.generated.h"

UENUM(BlueprintType)
enum class EGameplayCueNotify_EffectPlaySpace : uint8 {
    WorldSpace,
    CameraSpace,
};

