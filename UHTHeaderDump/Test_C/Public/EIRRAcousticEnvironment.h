#pragma once
#include "CoreMinimal.h"
#include "EIRRAcousticEnvironment.generated.h"

UENUM(BlueprintType)
enum class EIRRAcousticEnvironment : uint8 {
    ExteriorField,
    ExteriorForest,
    ExteriorUrban,
    InteriorSmall,
    InteriorMedium,
    InteriorLarge,
    MAX,
};

