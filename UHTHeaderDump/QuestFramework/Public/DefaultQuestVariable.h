#pragma once
#include "CoreMinimal.h"
#include "QuestVariableInitializer.h"
#include "DefaultQuestVariable.generated.h"

USTRUCT(BlueprintType)
struct QUESTFRAMEWORK_API FDefaultQuestVariable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestVariableInitializer Initializer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplicates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    FDefaultQuestVariable();
};

