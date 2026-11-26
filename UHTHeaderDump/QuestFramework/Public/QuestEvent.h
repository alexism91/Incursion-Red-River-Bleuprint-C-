#pragma once
#include "CoreMinimal.h"
#include "EQuestNetworkExecType.h"
#include "QuestEventPayload.h"
#include "QuestObjectBase.h"
#include "QuestEvent.generated.h"

class UQuestContext;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class QUESTFRAMEWORK_API UQuestEvent : public UQuestObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestNetworkExecType NetworkExecutionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerOnStateRestore;
    
public:
    UQuestEvent();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteEvent(UQuestContext* Context, const FQuestEventPayload& Payload);
    
};

