#pragma once
#include "CoreMinimal.h"
#include "EIRRAllegianceAttitude.generated.h"

UENUM(BlueprintType)
enum class EIRRAllegianceAttitude : uint8 {
    Friendly,
    Neutral,
    Hostile,
};

