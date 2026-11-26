#pragma once
#include "CoreMinimal.h"
#include "QuestComponentContextDelegateDelegate.generated.h"

class UQuestComponent;
class UQuestContext;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FQuestComponentContextDelegate, UQuestComponent*, QuestComponent, UQuestContext*, Context);

