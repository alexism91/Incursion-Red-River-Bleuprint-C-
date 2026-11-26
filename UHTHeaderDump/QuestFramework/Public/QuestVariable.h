#pragma once
#include "CoreMinimal.h"
#include "EQuestVariableType.h"
#include "QuestVariable.generated.h"

USTRUCT(BlueprintType)
struct QUESTFRAMEWORK_API FQuestVariable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestVariableType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Variable;
    
    FQuestVariable();
};

