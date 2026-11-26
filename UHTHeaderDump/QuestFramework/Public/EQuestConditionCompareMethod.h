#pragma once
#include "CoreMinimal.h"
#include "EQuestConditionCompareMethod.generated.h"

UENUM(BlueprintType)
enum class EQuestConditionCompareMethod : uint8 {
    All,
    Any,
};

