#pragma once
#include "CoreMinimal.h"
#include "EQUA_PlayerSlots.generated.h"

UENUM(BlueprintType)
enum class EQUA_PlayerSlots : uint8 {
    NONE,
    Primary,
    Secondary,
    Pistol,
    Melee,
    Armor,
    Backpack,
    Gloves,
    Pants,
    Shoes,
    TacticalRig,
    HeadWear,
    EarWear,
    Upper,
};

