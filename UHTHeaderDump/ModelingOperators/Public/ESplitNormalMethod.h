#pragma once
#include "CoreMinimal.h"
#include "ESplitNormalMethod.generated.h"

UENUM(BlueprintType)
enum class ESplitNormalMethod : uint8 {
    UseExistingTopology,
    FaceNormalThreshold,
    FaceGroupID,
    PerTriangle,
    PerVertex,
};

