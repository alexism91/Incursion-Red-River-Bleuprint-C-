#pragma once
#include "CoreMinimal.h"
#include "EPCGCopyPointsTagInheritanceMode.generated.h"

UENUM(BlueprintType)
enum class EPCGCopyPointsTagInheritanceMode : uint8 {
    Both,
    Source,
    Target,
};

