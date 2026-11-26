#pragma once
#include "CoreMinimal.h"
#include "EOffsetMeshToolOffsetType.generated.h"

UENUM(BlueprintType)
enum class EOffsetMeshToolOffsetType : uint8 {
    Iterative,
    Implicit,
};

