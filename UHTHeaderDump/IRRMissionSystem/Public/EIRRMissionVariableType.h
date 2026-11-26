#pragma once
#include "CoreMinimal.h"
#include "EIRRMissionVariableType.generated.h"

UENUM(BlueprintType)
enum class EIRRMissionVariableType : uint8 {
    Integer,
    Float,
    Bool,
};

