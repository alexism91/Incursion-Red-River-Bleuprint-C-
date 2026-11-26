#pragma once
#include "CoreMinimal.h"
#include "EPCGKernelLogVerbosity.generated.h"

UENUM()
enum class EPCGKernelLogVerbosity : int32 {
    Verbose,
    Warning,
    Error,
};

