#pragma once
#include "CoreMinimal.h"
#include "QuestService.h"
#include "QuestService_BlueprintBase.generated.h"

class UQuestContext;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class QUESTFRAMEWORK_API UQuestService_BlueprintBase : public UQuestService {
    GENERATED_BODY()
public:
    UQuestService_BlueprintBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickServiceBP(UQuestContext* Context, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnServiceDeactivatedBP(UQuestContext* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnServiceActivatedBP(UQuestContext* Context);
    
};

