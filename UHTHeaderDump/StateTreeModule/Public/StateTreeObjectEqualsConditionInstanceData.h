#pragma once
#include "CoreMinimal.h"
#include "StateTreeObjectEqualsConditionInstanceData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FStateTreeObjectEqualsConditionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Right;
    
    STATETREEMODULE_API FStateTreeObjectEqualsConditionInstanceData();
};

