#pragma once
#include "CoreMinimal.h"
#include "EPCGCollisionQueryFlag.generated.h"

UENUM(BlueprintType)
enum class EPCGCollisionQueryFlag : uint8 {
    Simple,
    Complex,
    SimpleFirst,
    ComplexFirst,
};

