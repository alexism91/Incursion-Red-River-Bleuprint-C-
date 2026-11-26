#pragma once
#include "CoreMinimal.h"
#include "QuestTextArg.h"
#include "QuestText.generated.h"

USTRUCT(BlueprintType)
struct QUESTFRAMEWORK_API FQuestText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FQuestTextArg> TextArguments;
    
    FQuestText();
};

