#pragma once
#include "CoreMinimal.h"
#include "EQUA_HitSection.generated.h"

UENUM(BlueprintType)
enum class EQUA_HitSection : uint8 {
    Head,
    UpperBody,
    LeftArm,
    RightArm,
    LeftLeg,
    RightLeg,
};

