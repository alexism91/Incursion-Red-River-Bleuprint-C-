#pragma once
#include "CoreMinimal.h"
#include "EMakeMeshPlacementType.generated.h"

UENUM(BlueprintType)
enum class EMakeMeshPlacementType : uint8 {
    GroundPlane,
    OnScene,
    AtOrigin,
};

