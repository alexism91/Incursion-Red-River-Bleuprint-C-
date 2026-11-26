#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EGenericAICheck -FallbackName=EGenericAICheck
#include "StateTreeConditionCommonBase.h"
#include "StateTreeCompareIntCondition.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeCompareIntCondition : public FStateTreeConditionCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGenericAICheck Operator;
    
    STATETREEMODULE_API FStateTreeCompareIntCondition();
};

