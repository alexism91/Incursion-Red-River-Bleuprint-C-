#pragma once
#include "CoreMinimal.h"
#include "EFKChainTranslationMode.generated.h"

UENUM(BlueprintType)
enum class EFKChainTranslationMode : uint8 {
    None,
    GloballyScaled,
    Absolute,
    StretchBoneLengthUniformly,
    StretchBoneLengthNonUniformly,
};

