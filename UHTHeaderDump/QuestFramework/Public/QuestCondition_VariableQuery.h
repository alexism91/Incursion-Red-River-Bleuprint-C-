#pragma once
#include "CoreMinimal.h"
#include "QuestCondition.h"
#include "QuestMemoryQuery.h"
#include "QuestCondition_VariableQuery.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class QUESTFRAMEWORK_API UQuestCondition_VariableQuery : public UQuestCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestMemoryQuery Query;
    
public:
    UQuestCondition_VariableQuery();

};

