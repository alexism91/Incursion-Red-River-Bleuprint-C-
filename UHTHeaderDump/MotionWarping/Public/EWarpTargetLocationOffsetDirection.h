#pragma once
#include "CoreMinimal.h"
#include "EWarpTargetLocationOffsetDirection.generated.h"

UENUM(BlueprintType)
enum class EWarpTargetLocationOffsetDirection : uint8 {
    TargetsForwardVector,
    VectorFromTargetToOwner,
    WorldSpace,
};

