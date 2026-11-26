#pragma once
#include "CoreMinimal.h"
#include "EMannequinLimb.generated.h"

UENUM(BlueprintType)
enum class EMannequinLimb : uint8 {
    Head,
    Hand_R,
    Hand_L,
    LowerArm_R,
    LowerArm_L,
    UpperArm_R,
    UpperArm_L,
    Thigh_R,
    Thigh_L,
    Calf_R,
    Calf_L,
    Foot_R,
    Foot_L,
    Chest,
};

