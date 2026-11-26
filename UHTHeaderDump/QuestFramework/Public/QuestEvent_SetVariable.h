#pragma once
#include "CoreMinimal.h"
#include "QuestEvent.h"
#include "QuestVariableInitializer.h"
#include "QuestEvent_SetVariable.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class QUESTFRAMEWORK_API UQuestEvent_SetVariable : public UQuestEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestVariableInitializer VariableSetter;
    
public:
    UQuestEvent_SetVariable();

};

