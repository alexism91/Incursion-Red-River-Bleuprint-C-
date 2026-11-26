#pragma once
#include "CoreMinimal.h"
#include "EPCGProjectionTagMergeMode.generated.h"

UENUM(BlueprintType)
enum class EPCGProjectionTagMergeMode : uint8 {
    Source,
    Target,
    Both,
};

