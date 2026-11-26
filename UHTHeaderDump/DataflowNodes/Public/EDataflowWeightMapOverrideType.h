#pragma once
#include "CoreMinimal.h"
#include "EDataflowWeightMapOverrideType.generated.h"

UENUM(BlueprintType)
enum class EDataflowWeightMapOverrideType : uint8 {
    ReplaceAll,
    AddDifference,
    ReplaceChanged,
};

