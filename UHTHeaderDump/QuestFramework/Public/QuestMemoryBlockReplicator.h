#pragma once
#include "CoreMinimal.h"
#include "QuestRepVar_Bool.h"
#include "QuestRepVar_Float.h"
#include "QuestRepVar_Int.h"
#include "QuestMemoryBlockReplicator.generated.h"

USTRUCT(BlueprintType)
struct QUESTFRAMEWORK_API FQuestMemoryBlockReplicator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestRepVar_Int> Integers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestRepVar_Float> Floats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestRepVar_Bool> Bools;
    
public:
    FQuestMemoryBlockReplicator();
};

