#pragma once
#include "CoreMinimal.h"
#include "ESmoothMeshToolSmoothType.generated.h"

UENUM(BlueprintType)
enum class ESmoothMeshToolSmoothType : uint8 {
    Iterative,
    Implicit,
    Diffusion,
};

