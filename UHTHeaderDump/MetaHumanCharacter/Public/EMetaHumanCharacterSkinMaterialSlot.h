#pragma once
#include "CoreMinimal.h"
#include "EMetaHumanCharacterSkinMaterialSlot.generated.h"

UENUM(BlueprintType)
enum class EMetaHumanCharacterSkinMaterialSlot : uint8 {
    LOD0,
    LOD1,
    LOD2,
    LOD3,
    LOD4,
    LOD5to7,
    Count,
};

