#pragma once
#include "CoreMinimal.h"
#include "QuestService.h"
#include "QuestVariable.h"
#include "QuestService_Timer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class QUESTFRAMEWORK_API UQuestService_Timer : public UQuestService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestVariable Variable;
    
public:
    UQuestService_Timer();

};

