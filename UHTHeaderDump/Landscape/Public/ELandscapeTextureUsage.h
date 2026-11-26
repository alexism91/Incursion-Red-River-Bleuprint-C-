#pragma once
#include "CoreMinimal.h"
#include "ELandscapeTextureUsage.generated.h"

UENUM(BlueprintType)
enum class ELandscapeTextureUsage : uint8 {
    Unknown,
    EditLayerData,
    FinalData,
};

