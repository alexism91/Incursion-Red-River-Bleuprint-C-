#pragma once
#include "CoreMinimal.h"
#include "EQUA_BodyParts.generated.h"

UENUM(BlueprintType)
enum class EQUA_BodyParts : uint8 {
    Head,
    Thorax,
    Stomach,
    RightArm,
    LeftArm,
    RightLeg,
    LeftLeg,
};

