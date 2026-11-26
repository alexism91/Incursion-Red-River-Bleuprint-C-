#pragma once
#include "CoreMinimal.h"
#include "EQUA_EquippedItemType.generated.h"

UENUM(BlueprintType)
enum class EQUA_EquippedItemType : uint8 {
    Unnarmed,
    PrimaryRifle,
    SecondaryRifle,
    Pistol,
    Melee,
    Grenade,
    Drone,
    BarbedWire,
    Mine,
};

