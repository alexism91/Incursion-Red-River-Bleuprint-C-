#pragma once
#include "CoreMinimal.h"
#include "ENDIDataChannelSpawnScaleMode.generated.h"

UENUM(BlueprintType)
enum class ENDIDataChannelSpawnScaleMode : uint8 {
    Override,
    Scale,
    Max,
};

