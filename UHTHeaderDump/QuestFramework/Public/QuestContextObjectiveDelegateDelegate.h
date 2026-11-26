#pragma once
#include "CoreMinimal.h"
#include "QuestContextObjectiveDelegateDelegate.generated.h"

class UQuestContext;
class UQuestObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FQuestContextObjectiveDelegate, UQuestContext*, Context, UQuestObjective*, Objective);

