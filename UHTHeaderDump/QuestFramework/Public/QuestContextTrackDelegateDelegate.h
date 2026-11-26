#pragma once
#include "CoreMinimal.h"
#include "QuestContextTrackDelegateDelegate.generated.h"

class UQuestContext;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestContextTrackDelegate, UQuestContext*, Context);

