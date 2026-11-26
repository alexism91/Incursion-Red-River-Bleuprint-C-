#pragma once
#include "CoreMinimal.h"
#include "ERootMotionHeightSource.generated.h"

UENUM(BlueprintType)
enum class ERootMotionHeightSource : uint8 {
    CopyHeightFromSource,
    SnapToGround,
};

