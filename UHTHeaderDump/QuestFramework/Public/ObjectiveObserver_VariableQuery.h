#pragma once
#include "CoreMinimal.h"
#include "QuestMemoryQuery.h"
#include "QuestObjectiveObserver.h"
#include "ObjectiveObserver_VariableQuery.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class QUESTFRAMEWORK_API UObjectiveObserver_VariableQuery : public UQuestObjectiveObserver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestMemoryQuery CompleteQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestMemoryQuery FailQuery;
    
    UObjectiveObserver_VariableQuery();

};

