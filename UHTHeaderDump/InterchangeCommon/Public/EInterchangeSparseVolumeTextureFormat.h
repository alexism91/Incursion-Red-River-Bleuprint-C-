#pragma once
#include "CoreMinimal.h"
#include "EInterchangeSparseVolumeTextureFormat.generated.h"

UENUM(BlueprintType)
enum class EInterchangeSparseVolumeTextureFormat : uint8 {
    Unorm8,
    Float16,
    Float32,
};

