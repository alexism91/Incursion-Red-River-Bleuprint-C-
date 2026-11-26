#pragma once
#include "CoreMinimal.h"
#include "EAkMultiPositionType.generated.h"

UENUM(BlueprintType)
enum class EAkMultiPositionType : uint8 {
    SingleSource,
    MultiSources,
    MultiDirections,
    Last,
};

