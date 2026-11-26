#pragma once
#include "CoreMinimal.h"
#include "EIRRBodyAwareness.generated.h"

UENUM(BlueprintType)
enum class EIRRBodyAwareness : uint8 {
    Unaware,
    PendingVerify,
    Spotted,
};

