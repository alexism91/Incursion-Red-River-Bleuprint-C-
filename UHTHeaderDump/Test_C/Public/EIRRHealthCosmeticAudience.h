#pragma once
#include "CoreMinimal.h"
#include "EIRRHealthCosmeticAudience.generated.h"

UENUM(BlueprintType)
enum class EIRRHealthCosmeticAudience : uint8 {
    Everyone,
    LocalPlayerOnly,
    ObserversOnly,
};

