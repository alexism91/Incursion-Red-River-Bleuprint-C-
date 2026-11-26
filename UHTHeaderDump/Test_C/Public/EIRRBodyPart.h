#pragma once
#include "CoreMinimal.h"
#include "EIRRBodyPart.generated.h"

UENUM(BlueprintType)
enum class EIRRBodyPart : uint8 {
    Head,
    Thorax,
    Stomach,
    RightArm,
    LeftArm,
    RightLeg,
    LeftLeg,
    RightFoot,
    LeftFoot,
};

