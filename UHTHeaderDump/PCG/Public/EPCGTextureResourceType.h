#pragma once
#include "CoreMinimal.h"
#include "EPCGTextureResourceType.generated.h"

UENUM(BlueprintType)
enum class EPCGTextureResourceType : uint8 {
    TextureObject,
    ExportedTexture,
    Invalid,
};

