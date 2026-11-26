#pragma once
#include "CoreMinimal.h"
#include "ETransferBoneWeightsMethod.generated.h"

UENUM(BlueprintType)
enum class ETransferBoneWeightsMethod : uint8 {
    ClosestPointOnSurface,
    InpaintWeights,
};

