#pragma once
#include "CoreMinimal.h"
#include "ELandscapeTextureHeightPatchEncoding.generated.h"

UENUM(BlueprintType)
enum class ELandscapeTextureHeightPatchEncoding : uint8 {
    ZeroToOne,
    WorldUnits,
    NativePackedHeight,
};

