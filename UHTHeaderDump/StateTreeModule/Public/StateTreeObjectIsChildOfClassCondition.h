#pragma once
#include "CoreMinimal.h"
#include "StateTreeConditionCommonBase.h"
#include "StateTreeObjectIsChildOfClassCondition.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeObjectIsChildOfClassCondition : public FStateTreeConditionCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    STATETREEMODULE_API FStateTreeObjectIsChildOfClassCondition();
};

