#pragma once
#include "CoreMinimal.h"
#include "ENavigationOptionFlag.generated.h"

UENUM(BlueprintType)
enum class ENavigationOptionFlag : uint8 {
    Default,
    Enable,
    Disable,
    MAX,
};

