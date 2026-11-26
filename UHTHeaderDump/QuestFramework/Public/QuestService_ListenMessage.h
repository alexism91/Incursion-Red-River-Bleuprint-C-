#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "QuestEventPayload.h"
#include "QuestMessageInterface.h"
#include "QuestService_BlueprintBase.h"
#include "QuestService_ListenMessage.generated.h"

class AActor;
class UQuestContext;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class QUESTFRAMEWORK_API UQuestService_ListenMessage : public UQuestService_BlueprintBase, public IQuestMessageInterface {
    GENERATED_BODY()
public:
    UQuestService_ListenMessage();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMessageReceived(UQuestContext* Context, const FGameplayTag& MessageTag, const FQuestEventPayload& Payload, AActor* Sender);
    

    // Fix for true pure virtual functions not being implemented
};

