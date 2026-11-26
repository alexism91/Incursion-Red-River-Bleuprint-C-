#pragma once
#include "CoreMinimal.h"
#include "EPCGFilterByAttributeMode.generated.h"

UENUM()
enum class EPCGFilterByAttributeMode : int32 {
    FilterByExistence,
    FilterByValue,
    FilterByValueRange,
};

