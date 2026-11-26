#pragma once
#include "CoreMinimal.h"
#include "EQuestResult.h"
#include "QuestContextStageDelegateDelegate.generated.h"

class UQuestContext;
class UQuestNode_Stage;
class UQuestObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FQuestContextStageDelegate, UQuestContext*, Context, UQuestNode_Stage*, StageNode, TArray<UQuestObjective*>, Objectives, EQuestResult, Result);

