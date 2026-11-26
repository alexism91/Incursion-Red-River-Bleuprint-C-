#pragma once
#include "CoreMinimal.h"
#include "EInventoryType.generated.h"

UENUM(BlueprintType)
enum class EInventoryType : uint8 {
    Player,
    Stash,
    Container,
    Item,
    AI,
    Vendor,
    Rewards,
    Gunsmith,
    Vicinity,
};

