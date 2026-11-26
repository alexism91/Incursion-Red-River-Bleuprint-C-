#pragma once
#include "CoreMinimal.h"
#include "EIRRTextAnimationResult.generated.h"

UENUM(BlueprintType)
enum class EIRRTextAnimationResult : uint8 {
    Updated,
    Finished,
};

