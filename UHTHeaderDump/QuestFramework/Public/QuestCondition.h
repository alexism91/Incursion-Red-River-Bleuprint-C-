#pragma once
#include "CoreMinimal.h"
#include "QuestObjectBase.h"
#include "QuestCondition.generated.h"

class UQuestContext;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class QUESTFRAMEWORK_API UQuestCondition : public UQuestObjectBase {
    GENERATED_BODY()
public:
    UQuestCondition();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckCondition(UQuestContext* Context) const;
    
};

