#pragma once
#include "CoreMinimal.h"
#include "QuestObjectBase.h"
#include "QuestTextArgument.generated.h"

class UQuestContext;

UCLASS(Blueprintable, EditInlineNew)
class QUESTFRAMEWORK_API UQuestTextArgument : public UQuestObjectBase {
    GENERATED_BODY()
public:
    UQuestTextArgument();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetText(UQuestContext* Context) const;
    
};

