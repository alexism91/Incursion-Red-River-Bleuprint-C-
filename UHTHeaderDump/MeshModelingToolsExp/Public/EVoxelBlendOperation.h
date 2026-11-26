#pragma once
#include "CoreMinimal.h"
#include "EVoxelBlendOperation.generated.h"

UENUM(BlueprintType)
enum class EVoxelBlendOperation : uint8 {
    Union,
    Subtract,
};

