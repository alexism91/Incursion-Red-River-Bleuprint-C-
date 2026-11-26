#pragma once
#include "CoreMinimal.h"
#include "StateTreeRandomConditionInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeRandomConditionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Threshold;
    
    STATETREEMODULE_API FStateTreeRandomConditionInstanceData();
};

