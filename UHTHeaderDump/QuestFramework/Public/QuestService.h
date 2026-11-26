#pragma once
#include "CoreMinimal.h"
#include "EQuestNetworkExecType.h"
#include "QuestObjectBase.h"
#include "QuestService.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class QUESTFRAMEWORK_API UQuestService : public UQuestObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestNetworkExecType NetworkExecutionType;
    
public:
    UQuestService();

};

