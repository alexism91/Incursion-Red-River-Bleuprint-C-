#pragma once
#include "CoreMinimal.h"
#include "EIRRAvoidanceClaimConsumer.generated.h"

UENUM(BlueprintType)
enum class EIRRAvoidanceClaimConsumer : uint8 {
    None,
    RouteCost,
    DestinationScore,
    Reaction = 4,
    FightingPosition = 8,
};

