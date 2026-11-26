#pragma once
#include "CoreMinimal.h"
#include "StateTreeConditionCommonBase.h"
#include "StateTreeCompareEnumCondition.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeCompareEnumCondition : public FStateTreeConditionCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    STATETREEMODULE_API FStateTreeCompareEnumCondition();
};

