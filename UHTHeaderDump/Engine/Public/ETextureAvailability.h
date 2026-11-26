#pragma once
#include "CoreMinimal.h"
#include "ETextureAvailability.generated.h"

UENUM(BlueprintType)
enum class ETextureAvailability : uint8 {
    GPU,
    CPU,
};

