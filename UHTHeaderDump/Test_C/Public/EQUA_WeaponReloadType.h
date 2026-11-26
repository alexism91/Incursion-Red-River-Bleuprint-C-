#pragma once
#include "CoreMinimal.h"
#include "EQUA_WeaponReloadType.generated.h"

UENUM(BlueprintType)
enum class EQUA_WeaponReloadType : uint8 {
    QuickReload,
    EmptyReload,
    TacticalReload,
};

