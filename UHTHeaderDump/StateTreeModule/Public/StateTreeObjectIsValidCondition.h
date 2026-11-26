#pragma once
#include "CoreMinimal.h"
#include "StateTreeConditionCommonBase.h"
#include "StateTreeObjectIsValidCondition.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeObjectIsValidCondition : public FStateTreeConditionCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    STATETREEMODULE_API FStateTreeObjectIsValidCondition();
};

