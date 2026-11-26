#pragma once
#include "CoreMinimal.h"
#include "ESimpleGameplayEffectDuration.generated.h"

UENUM(BlueprintType)
enum class ESimpleGameplayEffectDuration : uint8 {
    Instant,
    Infinite,
    Duration,
};

