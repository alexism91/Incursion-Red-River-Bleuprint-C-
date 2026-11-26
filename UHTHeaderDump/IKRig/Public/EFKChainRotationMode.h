#pragma once
#include "CoreMinimal.h"
#include "EFKChainRotationMode.generated.h"

UENUM(BlueprintType)
enum class EFKChainRotationMode : uint8 {
    Interpolated,
    OneToOne,
    OneToOneReversed,
    MatchChain,
    MatchScaledChain,
    None,
};

