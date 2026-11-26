#pragma once
#include "CoreMinimal.h"
#include "EPCGPrintVerbosity.generated.h"

UENUM(BlueprintType)
enum class EPCGPrintVerbosity : uint8 {
    NoLogging,
    Log = 5,
    Warning = 3,
    Error = 2,
    Display = 4,
};

