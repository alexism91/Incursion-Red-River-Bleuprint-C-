#pragma once
#include "CoreMinimal.h"
#include "EMetaHumanCharacterEnvironment.generated.h"

UENUM(BlueprintType)
enum class EMetaHumanCharacterEnvironment : uint8 {
    Studio,
    Split,
    Fireside,
    Moonlight,
    Tungsten,
    Portrait,
    RedLantern,
    TextureBooth,
    Count,
};

