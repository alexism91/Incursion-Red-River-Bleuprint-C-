#pragma once
#include "CoreMinimal.h"
#include "ECameraBuildStatus.generated.h"

UENUM(BlueprintType)
enum class ECameraBuildStatus : uint8 {
    Clean,
    CleanWithWarnings,
    WithErrors,
    Dirty,
};

