#pragma once
#include "CoreMinimal.h"
#include "EQuestResult.h"
#include "QuestObjectBase.h"
#include "QuestObjectiveObserver.generated.h"

class UQuestContext;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class QUESTFRAMEWORK_API UQuestObjectiveObserver : public UQuestObjectBase {
    GENERATED_BODY()
public:
    UQuestObjectiveObserver();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EQuestResult Evaluate(UQuestContext* Context) const;
    
};

