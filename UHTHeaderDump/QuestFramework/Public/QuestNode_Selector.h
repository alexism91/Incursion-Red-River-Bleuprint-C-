#pragma once
#include "CoreMinimal.h"
#include "QuestConditions.h"
#include "QuestNode.h"
#include "QuestNode_Selector.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class QUESTFRAMEWORK_API UQuestNode_Selector : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestConditions> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> ChildToConditionIndexTable;
    
public:
    UQuestNode_Selector();

};

