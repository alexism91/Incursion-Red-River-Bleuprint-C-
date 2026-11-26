#pragma once
#include "CoreMinimal.h"
#include "EAimTransitionSource.generated.h"

UENUM(BlueprintType)
enum class EAimTransitionSource : uint8 {
    Default,
    Base,
    Current,
    Target,
};

