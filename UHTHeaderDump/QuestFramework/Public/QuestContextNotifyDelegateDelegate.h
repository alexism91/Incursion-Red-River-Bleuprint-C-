#pragma once
#include "CoreMinimal.h"
#include "QuestContextNotifyDelegateDelegate.generated.h"

class UQuestContext;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestContextNotifyDelegate, UQuestContext*, Context);

