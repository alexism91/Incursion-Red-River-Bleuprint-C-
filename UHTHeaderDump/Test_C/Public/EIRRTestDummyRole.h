#pragma once
#include "CoreMinimal.h"
#include "EIRRTestDummyRole.generated.h"

UENUM(BlueprintType)
enum class EIRRTestDummyRole : uint8 {
    Target,
    Friendly,
    PeekedCorner,
};

