#pragma once
#include "CoreMinimal.h"
#include "EQuestVariableComparisonType.generated.h"

UENUM(BlueprintType)
enum class EQuestVariableComparisonType : uint8 {
    Constant,
    OtherVariable,
};

