#pragma once
#include "CoreMinimal.h"
#include "ETextureCollectionMemberType.generated.h"

UENUM(BlueprintType)
enum class ETextureCollectionMemberType : uint8 {
    Texture2D,
    TextureCube,
    Texture2DArray,
    TextureCubeArray,
    TextureVolume,
    Max,
};

