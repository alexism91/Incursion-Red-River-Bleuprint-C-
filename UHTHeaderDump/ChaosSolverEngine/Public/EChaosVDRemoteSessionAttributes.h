#pragma once
#include "CoreMinimal.h"
#include "EChaosVDRemoteSessionAttributes.generated.h"

UENUM(BlueprintType)
enum class EChaosVDRemoteSessionAttributes : uint8 {
    None,
    SupportsDataChannelChange,
    CanExpire,
    IsMultiSessionWrapper = 4,
};

