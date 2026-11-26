#pragma once
#include "CoreMinimal.h"
#include "EQuestTextArgType.generated.h"

UENUM(BlueprintType)
enum class EQuestTextArgType : uint8 {
    QuestVariable,
    Custom,
};

