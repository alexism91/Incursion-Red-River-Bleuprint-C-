#pragma once
#include "CoreMinimal.h"
#include "EClothingTeleportMode.generated.h"

UENUM(BlueprintType)
enum class EClothingTeleportMode : uint8 {
    None,
    Teleport,
    TeleportAndReset,
    HardReset,
};

