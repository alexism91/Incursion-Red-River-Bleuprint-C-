#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "QuestMessageInterface.h"
#include "QuestService_EventTriggerBase.h"
#include "QuestService_TriggerEventsOnMessage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class QUESTFRAMEWORK_API UQuestService_TriggerEventsOnMessage : public UQuestService_EventTriggerBase, public IQuestMessageInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MessagesToListen;
    
public:
    UQuestService_TriggerEventsOnMessage();


    // Fix for true pure virtual functions not being implemented
};

