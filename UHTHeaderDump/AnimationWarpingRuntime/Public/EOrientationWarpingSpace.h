#pragma once
#include "CoreMinimal.h"
#include "EOrientationWarpingSpace.generated.h"

UENUM(BlueprintType)
enum class EOrientationWarpingSpace : uint8 {
    ComponentTransform,
    RootBoneTransform,
    CustomTransform,
};

