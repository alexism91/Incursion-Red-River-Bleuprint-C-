#pragma once
#include "CoreMinimal.h"
#include "EPCGNodeTitleType.generated.h"

UENUM(BlueprintType)
enum class EPCGNodeTitleType : uint8 {
    FullTitle,
    ListView,
};

