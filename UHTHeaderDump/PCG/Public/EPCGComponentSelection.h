#pragma once
#include "CoreMinimal.h"
#include "EPCGComponentSelection.generated.h"

UENUM(BlueprintType)
enum class EPCGComponentSelection : uint8 {
    ByTag,
    ByClass,
    Unknown,
};

