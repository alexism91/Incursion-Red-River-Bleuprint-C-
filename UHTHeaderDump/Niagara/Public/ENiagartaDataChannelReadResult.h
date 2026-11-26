#pragma once
#include "CoreMinimal.h"
#include "ENiagartaDataChannelReadResult.generated.h"

UENUM(BlueprintType)
enum class ENiagartaDataChannelReadResult : uint8 {
    Success,
    Failure,
};

