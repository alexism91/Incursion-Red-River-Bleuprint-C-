#pragma once
#include "CoreMinimal.h"
#include "EQuestResult.h"
#include "QuestContextObjectiveResultDelegateDelegate.generated.h"

class UQuestContext;
class UQuestObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FQuestContextObjectiveResultDelegate, UQuestContext*, Context, UQuestObjective*, Objective, EQuestResult, Result);

