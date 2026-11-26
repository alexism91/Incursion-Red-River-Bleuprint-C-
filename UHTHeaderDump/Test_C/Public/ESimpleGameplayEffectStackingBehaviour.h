#pragma once
#include "CoreMinimal.h"
#include "ESimpleGameplayEffectStackingBehaviour.generated.h"

UENUM(BlueprintType)
enum class ESimpleGameplayEffectStackingBehaviour : uint8 {
    SingleInstance,
    ReInit,
    Replace,
    Ignore,
};

