#pragma once
#include "CoreMinimal.h"
#include "QuestStageObjectives.generated.h"

class UQuestObjective;

USTRUCT(BlueprintType)
struct FQuestStageObjectives {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UQuestObjective*> ObjectiveArray;
    
    QUESTFRAMEWORK_API FQuestStageObjectives();
};

