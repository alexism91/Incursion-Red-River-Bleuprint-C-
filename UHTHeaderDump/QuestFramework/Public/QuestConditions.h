#pragma once
#include "CoreMinimal.h"
#include "EQuestConditionCompareMethod.h"
#include "QuestConditions.generated.h"

class UQuestCondition;

USTRUCT(BlueprintType)
struct QUESTFRAMEWORK_API FQuestConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UQuestCondition*> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestConditionCompareMethod ComparisonMethod;
    
    FQuestConditions();
};

