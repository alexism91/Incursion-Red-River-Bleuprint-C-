#pragma once
#include "CoreMinimal.h"
#include "EIRRAICoverExposedReason.generated.h"

UENUM(BlueprintType)
enum class EIRRAICoverExposedReason : uint8 {
    None,
    Trace,
    Dot,
    Damage_SpecificBodyPart,
    Damage_ShotCount,
    Damage_Direction,
};

