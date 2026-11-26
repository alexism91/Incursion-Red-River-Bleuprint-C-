#pragma once
#include "CoreMinimal.h"
#include "QuestService.h"
#include "QuestService_EventTriggerBase.generated.h"

class UQuestEvent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class QUESTFRAMEWORK_API UQuestService_EventTriggerBase : public UQuestService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UQuestEvent*> Events;
    
public:
    UQuestService_EventTriggerBase();

};

