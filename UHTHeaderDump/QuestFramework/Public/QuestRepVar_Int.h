#pragma once
#include "CoreMinimal.h"
#include "QuestRepVar_Int.generated.h"

USTRUCT(BlueprintType)
struct FQuestRepVar_Int {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    QUESTFRAMEWORK_API FQuestRepVar_Int();
};

