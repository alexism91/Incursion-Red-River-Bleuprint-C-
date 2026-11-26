#pragma once
#include "CoreMinimal.h"
#include "EPCGUserParameterSource.generated.h"

UENUM(BlueprintType)
enum class EPCGUserParameterSource : uint8 {
    Current,
    Upstream,
    Root,
};

