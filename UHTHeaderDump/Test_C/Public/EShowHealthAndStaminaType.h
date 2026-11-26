#pragma once
#include "CoreMinimal.h"
#include "EShowHealthAndStaminaType.generated.h"

UENUM(BlueprintType)
enum class EShowHealthAndStaminaType : uint8 {
    Always,
    Draining,
    Never,
};

