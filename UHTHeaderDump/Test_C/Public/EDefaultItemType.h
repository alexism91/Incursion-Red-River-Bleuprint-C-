#pragma once
#include "CoreMinimal.h"
#include "EDefaultItemType.generated.h"

UENUM(BlueprintType)
enum class EDefaultItemType : uint8 {
    Preset,
    Manual,
    Random,
};

