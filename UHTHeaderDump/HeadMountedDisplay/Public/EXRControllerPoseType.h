#pragma once
#include "CoreMinimal.h"
#include "EXRControllerPoseType.generated.h"

UENUM(BlueprintType)
enum class EXRControllerPoseType : uint8 {
    Aim,
    Grip,
    Palm,
};

