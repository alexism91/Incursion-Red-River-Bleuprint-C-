#pragma once
#include "CoreMinimal.h"
#include "QuestRepVar_Float.generated.h"

USTRUCT(BlueprintType)
struct FQuestRepVar_Float {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    QUESTFRAMEWORK_API FQuestRepVar_Float();
};

