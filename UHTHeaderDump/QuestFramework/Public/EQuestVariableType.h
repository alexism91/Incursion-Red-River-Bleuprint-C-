#pragma once
#include "CoreMinimal.h"
#include "EQuestVariableType.generated.h"

UENUM(BlueprintType)
enum class EQuestVariableType : uint8 {
    Integer,
    Float,
    Bool,
};

