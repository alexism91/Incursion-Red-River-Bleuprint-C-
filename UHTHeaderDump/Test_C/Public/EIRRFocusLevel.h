#pragma once
#include "CoreMinimal.h"
#include "EIRRFocusLevel.generated.h"

UENUM(BlueprintType)
enum class EIRRFocusLevel : uint8 {
    None,
    Sprinting,
    Aiming,
    ThreatGlance,
    Scripted,
    TargetFocus,
    Moving,
    TargetDirection,
};

