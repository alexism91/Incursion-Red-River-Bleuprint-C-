#pragma once
#include "CoreMinimal.h"
#include "QuestRepVar_Bool.generated.h"

USTRUCT(BlueprintType)
struct FQuestRepVar_Bool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    QUESTFRAMEWORK_API FQuestRepVar_Bool();
};

