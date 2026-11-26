#pragma once
#include "CoreMinimal.h"
#include "ESoundWaveCloudStreamingPlatformEnableType.generated.h"

UENUM(BlueprintType)
enum class ESoundWaveCloudStreamingPlatformEnableType : uint8 {
    Inherited,
    Disabled,
    SWC_MultipleValues,
};

