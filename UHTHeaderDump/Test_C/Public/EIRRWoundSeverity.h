#pragma once
#include "CoreMinimal.h"
#include "EIRRWoundSeverity.generated.h"

UENUM(BlueprintType)
enum class EIRRWoundSeverity : uint8 {
    FromHit,
    Light,
    Heavy,
};

