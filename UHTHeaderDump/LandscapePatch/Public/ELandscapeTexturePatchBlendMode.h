#pragma once
#include "CoreMinimal.h"
#include "ELandscapeTexturePatchBlendMode.generated.h"

UENUM(BlueprintType)
enum class ELandscapeTexturePatchBlendMode : uint8 {
    AlphaBlend,
    Additive,
    Min,
    Max,
};

