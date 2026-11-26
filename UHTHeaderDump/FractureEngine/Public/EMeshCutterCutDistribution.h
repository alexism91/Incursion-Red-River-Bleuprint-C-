#pragma once
#include "CoreMinimal.h"
#include "EMeshCutterCutDistribution.generated.h"

UENUM(BlueprintType)
enum class EMeshCutterCutDistribution : uint8 {
    SingleCut,
    UniformRandom,
    Grid,
};

