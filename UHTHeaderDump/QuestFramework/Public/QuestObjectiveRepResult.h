#pragma once
#include "CoreMinimal.h"
#include "EQuestResult.h"
#include "QuestObjectiveRepResult.generated.h"

class UQuestObjective;

USTRUCT(BlueprintType)
struct FQuestObjectiveRepResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestObjective* Obj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestResult Result;
    
    QUESTFRAMEWORK_API FQuestObjectiveRepResult();
};

