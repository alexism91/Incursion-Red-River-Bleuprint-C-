#pragma once
#include "CoreMinimal.h"
#include "QuestContextNodeDelegateDelegate.generated.h"

class UQuestContext;
class UQuestNode;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FQuestContextNodeDelegate, UQuestContext*, Context, UQuestNode*, NewNode);

