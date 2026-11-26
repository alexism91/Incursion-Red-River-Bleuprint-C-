#pragma once
#include "CoreMinimal.h"
#include "EPCGHLODSource.generated.h"

UENUM(BlueprintType)
enum class EPCGHLODSource : uint8 {
    Self,
    Reference,
    Template,
};

