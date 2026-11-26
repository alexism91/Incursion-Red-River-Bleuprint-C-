#pragma once
#include "CoreMinimal.h"
#include "EGameplayEffectVersion.generated.h"

UENUM(BlueprintType)
enum class EGameplayEffectVersion : uint8 {
    Monolithic,
    Modular53,
    AbilitiesComponent53,
    Current = AbilitiesComponent53,
};

