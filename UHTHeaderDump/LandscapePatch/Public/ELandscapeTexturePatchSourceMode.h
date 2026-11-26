#pragma once
#include "CoreMinimal.h"
#include "ELandscapeTexturePatchSourceMode.generated.h"

UENUM(BlueprintType)
enum class ELandscapeTexturePatchSourceMode : uint8 {
    None,
    InternalTexture,
    TextureBackedRenderTarget,
    TextureAsset,
};

