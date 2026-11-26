#pragma once
#include "CoreMinimal.h"
#include "EQuestLogicalOperator.h"
#include "QuestVariableComparison.h"
#include "QuestMemoryQuery.generated.h"

USTRUCT(BlueprintType)
struct QUESTFRAMEWORK_API FQuestMemoryQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestVariableComparison> Comparisons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestLogicalOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertResult;
    
    FQuestMemoryQuery();
};

