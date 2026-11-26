#pragma once
#include "CoreMinimal.h"
#include "ECalibratedMapChannels.generated.h"

UENUM(BlueprintType)
enum class ECalibratedMapChannels : uint8 {
    RG,
    BA,
    None,
    MAX,
};

