#pragma once
#include "CoreMinimal.h"
#include "EPCGCoordinateSpace.generated.h"

UENUM(BlueprintType)
enum class EPCGCoordinateSpace : uint8 {
    World,
    OriginalComponent,
    LocalComponent,
};

