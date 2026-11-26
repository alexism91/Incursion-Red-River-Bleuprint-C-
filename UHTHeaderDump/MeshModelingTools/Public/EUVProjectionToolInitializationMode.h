#pragma once
#include "CoreMinimal.h"
#include "EUVProjectionToolInitializationMode.generated.h"

UENUM()
enum class EUVProjectionToolInitializationMode : int32 {
    Default,
    UsePrevious,
    AutoFit,
    AutoFitAlign,
};

