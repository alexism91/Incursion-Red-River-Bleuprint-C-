#pragma once
#include "CoreMinimal.h"
#include "EPCGStringMatchingOperator.generated.h"

UENUM(BlueprintType)
enum class EPCGStringMatchingOperator : uint8 {
    Equal,
    Substring,
    Matches,
};

