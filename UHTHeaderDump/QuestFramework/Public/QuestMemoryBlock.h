#pragma once
#include "CoreMinimal.h"
#include "QuestMemoryBlock.generated.h"

USTRUCT(BlueprintType)
struct QUESTFRAMEWORK_API FQuestMemoryBlock {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> IntegerVariables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> FloatVariables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> BoolVariables;
    
public:
    FQuestMemoryBlock();
};

