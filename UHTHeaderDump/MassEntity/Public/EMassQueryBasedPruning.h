#pragma once
#include "CoreMinimal.h"
#include "EMassQueryBasedPruning.generated.h"

UENUM(BlueprintType)
enum class EMassQueryBasedPruning : uint8 {
    Prune,
    Never,
    Default = Prune,
};

