#pragma once
#include "CoreMinimal.h"
#include "EQuestTextArgType.h"
#include "QuestNumberFormattingOptions.h"
#include "QuestVariable.h"
#include "QuestTextArg.generated.h"

class UQuestTextArgument;

USTRUCT(BlueprintType)
struct QUESTFRAMEWORK_API FQuestTextArg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ArgName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestTextArgType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestVariable Variable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNumberFormatter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestNumberFormattingOptions NumberFormatOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestTextArgument* CustomTextArgument;
    
    FQuestTextArg();
};

