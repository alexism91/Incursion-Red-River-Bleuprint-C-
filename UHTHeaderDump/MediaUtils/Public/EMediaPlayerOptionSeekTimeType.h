#pragma once
#include "CoreMinimal.h"
#include "EMediaPlayerOptionSeekTimeType.generated.h"

UENUM(BlueprintType)
enum class EMediaPlayerOptionSeekTimeType : uint8 {
    Ignored,
    RelativeToStartTime,
};

