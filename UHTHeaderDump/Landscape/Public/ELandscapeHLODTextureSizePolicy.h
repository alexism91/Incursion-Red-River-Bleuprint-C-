#pragma once
#include "CoreMinimal.h"
#include "ELandscapeHLODTextureSizePolicy.generated.h"

UENUM(BlueprintType)
enum class ELandscapeHLODTextureSizePolicy : uint8 {
    AutomaticSize,
    SpecificSize,
};

