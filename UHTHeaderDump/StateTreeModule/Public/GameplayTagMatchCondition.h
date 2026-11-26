#pragma once
#include "CoreMinimal.h"
#include "StateTreeConditionCommonBase.h"
#include "GameplayTagMatchCondition.generated.h"

USTRUCT(BlueprintType)
struct FGameplayTagMatchCondition : public FStateTreeConditionCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExactMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    STATETREEMODULE_API FGameplayTagMatchCondition();
};

