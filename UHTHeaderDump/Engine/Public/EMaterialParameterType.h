#pragma once
#include "CoreMinimal.h"
#include "EMaterialParameterType.generated.h"

UENUM(BlueprintType)
enum class EMaterialParameterType : uint8 {
    Scalar,
    Vector,
    DoubleVector,
    Texture,
    TextureCollection,
    Font,
    RuntimeVirtualTexture,
    SparseVolumeTexture,
    StaticSwitch,
    NumRuntime,
    StaticComponentMask = NumRuntime,
    Num,
    None = 255,
};

