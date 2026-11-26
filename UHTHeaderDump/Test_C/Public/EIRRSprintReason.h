#pragma once
#include "CoreMinimal.h"
#include "EIRRSprintReason.generated.h"

UENUM(BlueprintType)
enum class EIRRSprintReason : uint8 {
    None,
    InvalidOwner,
    CannotSprint,
    NoPath,
    PathTooShort,
    Decelerating,
    TargetClose,
    VisionRecentlyChanged,
    MovingInLineWithTarget,
    WeaponNotReady,
    Suppressed,
    RepositionForShot,
    RepositionToSuppress,
    MovingPerpendicular,
    MoveTooRecent,
};

