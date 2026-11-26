#pragma once
#include "CoreMinimal.h"
#include "EQUA_WeaponMontageType.generated.h"

UENUM(BlueprintType)
enum class EQUA_WeaponMontageType : uint8 {
    Lower,
    Draw,
    SwitchFireMode,
    Inspect,
    MagInspect,
    WeaponAction,
    Reload,
    Fire,
};

