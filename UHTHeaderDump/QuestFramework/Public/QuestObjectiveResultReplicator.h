#pragma once
#include "CoreMinimal.h"
#include "QuestObjectiveRepResult.h"
#include "QuestObjectiveResultReplicator.generated.h"

USTRUCT(BlueprintType)
struct FQuestObjectiveResultReplicator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestObjectiveRepResult> RepResults;
    
public:
    QUESTFRAMEWORK_API FQuestObjectiveResultReplicator();
};

