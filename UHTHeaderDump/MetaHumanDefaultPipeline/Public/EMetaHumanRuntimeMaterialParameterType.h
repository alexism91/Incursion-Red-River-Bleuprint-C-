#pragma once
#include "CoreMinimal.h"
#include "EMetaHumanRuntimeMaterialParameterType.generated.h"

UENUM()
enum class EMetaHumanRuntimeMaterialParameterType : int32 {
    Toggle,
    Scalar,
    Vector,
    DoubleVector,
    Texture,
    TextureCollection,
    Font,
    RuntimeVirtualTexture,
    SparseVolumeTexture,
};

