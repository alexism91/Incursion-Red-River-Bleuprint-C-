#pragma once
#include "CoreMinimal.h"
#include "ELandscapeTextureHeightPatchZeroHeightMeaning.generated.h"

UENUM(BlueprintType)
enum class ELandscapeTextureHeightPatchZeroHeightMeaning : uint8 {
    PatchZ,
    LandscapeZ,
    WorldZero,
};

