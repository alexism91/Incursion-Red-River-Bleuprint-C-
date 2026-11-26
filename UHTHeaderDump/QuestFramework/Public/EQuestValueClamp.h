#pragma once
#include "CoreMinimal.h"
#include "EQuestValueClamp.generated.h"

UENUM(BlueprintType)
enum class EQuestValueClamp : uint8 {
    NotClamped,
    ClampMin,
    ClampMax,
    ClampMinAndMax,
};

