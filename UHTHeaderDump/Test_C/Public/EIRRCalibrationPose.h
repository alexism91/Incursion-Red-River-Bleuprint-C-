#pragma once
#include "CoreMinimal.h"
#include "EIRRCalibrationPose.generated.h"

UENUM(BlueprintType)
enum class EIRRCalibrationPose : uint8 {
    StandNeutral,
    StandLeanLeft,
    StandLeanRight,
    CrouchNeutral,
    CrouchLeanLeft,
    CrouchLeanRight,
    MAX,
};

