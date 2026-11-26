#pragma once
#include "CoreMinimal.h"
#include "EPCGSpherePointOrientation.generated.h"

UENUM(BlueprintType)
enum class EPCGSpherePointOrientation : uint8 {
    Radial,
    Centric,
    None,
};

