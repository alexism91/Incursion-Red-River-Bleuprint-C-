#pragma once
#include "CoreMinimal.h"
#include "EUVProjectionToolActions.generated.h"

UENUM(BlueprintType)
enum class EUVProjectionToolActions : uint8 {
    NoAction,
    AutoFit,
    AutoFitAlign,
    Reset,
};

