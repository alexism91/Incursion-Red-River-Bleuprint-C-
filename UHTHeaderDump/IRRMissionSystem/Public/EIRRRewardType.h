#pragma once
#include "CoreMinimal.h"
#include "EIRRRewardType.generated.h"

UENUM(BlueprintType)
enum class EIRRRewardType : uint8 {
    None,
    Item,
    Experience,
    FactionReputation,
};

