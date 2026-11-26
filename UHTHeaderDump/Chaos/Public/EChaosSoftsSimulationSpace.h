#pragma once
#include "CoreMinimal.h"
#include "EChaosSoftsSimulationSpace.generated.h"

UENUM(BlueprintType)
enum class EChaosSoftsSimulationSpace : uint8 {
    WorldSpace,
    ComponentSpace,
    ReferenceBoneSpace,
};

