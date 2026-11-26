#pragma once
#include "CoreMinimal.h"
#include "EUsdRootMotionHandling.generated.h"

UENUM(BlueprintType)
enum class EUsdRootMotionHandling : uint8 {
    NoAdditionalRootMotion,
    UseMotionFromSkelRoot,
    UseMotionFromSkeleton,
};

