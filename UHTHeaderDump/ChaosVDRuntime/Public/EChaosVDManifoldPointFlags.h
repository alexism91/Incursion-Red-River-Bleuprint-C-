#pragma once
#include "CoreMinimal.h"
#include "EChaosVDManifoldPointFlags.generated.h"

UENUM(BlueprintType)
enum class EChaosVDManifoldPointFlags : uint8 {
    None,
    Disabled,
    WasRestored,
    WasReplaced = 4,
    HasStaticFrictionAnchor = 8,
    IsValid = 16,
    InsideStaticFrictionCone = 32,
};

