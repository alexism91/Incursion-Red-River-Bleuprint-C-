#pragma once
#include "CoreMinimal.h"
#include "EPCGFilterByAttributeValueMode.generated.h"

UENUM()
enum class EPCGFilterByAttributeValueMode : int32 {
    AnyOf,
    AllOf,
};

