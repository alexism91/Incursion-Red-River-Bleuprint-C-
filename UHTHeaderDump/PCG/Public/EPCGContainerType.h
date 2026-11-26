#pragma once
#include "CoreMinimal.h"
#include "EPCGContainerType.generated.h"

UENUM(BlueprintType)
enum class EPCGContainerType : uint8 {
    Element,
    None = Element,
    Array,
    Map,
    Set,
};

