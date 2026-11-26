#pragma once
#include "CoreMinimal.h"
#include "EMediaPlateResourceType.generated.h"

UENUM(BlueprintType)
enum class EMediaPlateResourceType : uint8 {
    Playlist,
    External,
    Asset,
};

