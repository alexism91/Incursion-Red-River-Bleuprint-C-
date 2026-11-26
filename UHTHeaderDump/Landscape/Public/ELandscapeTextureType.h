#pragma once
#include "CoreMinimal.h"
#include "ELandscapeTextureType.generated.h"

UENUM(BlueprintType)
enum class ELandscapeTextureType : uint8 {
    Unknown,
    Heightmap,
    Weightmap,
};

