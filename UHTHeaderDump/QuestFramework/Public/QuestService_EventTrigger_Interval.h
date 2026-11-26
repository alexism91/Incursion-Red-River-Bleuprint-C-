#pragma once
#include "CoreMinimal.h"
#include "QuestService_EventTriggerBase.h"
#include "QuestService_EventTrigger_Interval.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class QUESTFRAMEWORK_API UQuestService_EventTrigger_Interval : public UQuestService_EventTriggerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerOnActivation;
    
public:
    UQuestService_EventTrigger_Interval();

};

