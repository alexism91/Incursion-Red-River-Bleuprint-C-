#pragma once
#include "CoreMinimal.h"
#include "EPCGGenerationStatus.generated.h"

UENUM(BlueprintType)
enum class EPCGGenerationStatus : uint8 {
    Completed,
    Aborted,
};

