#pragma once
#include "CoreMinimal.h"
#include "EIRRStrafeSideBias.generated.h"

UENUM(BlueprintType)
enum class EIRRStrafeSideBias : uint8 {
    None,
    Alternate,
    Commit,
};

