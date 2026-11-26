#pragma once
#include "CoreMinimal.h"
#include "EIRRRotationTargetMode.generated.h"

UENUM(BlueprintType)
enum class EIRRRotationTargetMode : uint8 {
    None,
    Rotation,
    Location,
    Actor,
};

