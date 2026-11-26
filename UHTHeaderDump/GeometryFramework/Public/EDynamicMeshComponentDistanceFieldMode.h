#pragma once
#include "CoreMinimal.h"
#include "EDynamicMeshComponentDistanceFieldMode.generated.h"

UENUM(BlueprintType)
enum class EDynamicMeshComponentDistanceFieldMode : uint8 {
    NoDistanceField,
    AsyncCPUDistanceField,
};

