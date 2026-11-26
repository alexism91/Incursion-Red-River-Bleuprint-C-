#pragma once
#include "CoreMinimal.h"
#include "EQuestResult.h"
#include "QuestNode.h"
#include "QuestNode_End.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class QUESTFRAMEWORK_API UQuestNode_End : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompleted;
    
public:
    UQuestNode_End();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQuestResult GetEndResultType() const;
    
};

