#pragma once
#include "CoreMinimal.h"
#include "StateTreeBooleanNotOperationPropertyFunctionInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeBooleanNotOperationPropertyFunctionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResult;
    
    STATETREEMODULE_API FStateTreeBooleanNotOperationPropertyFunctionInstanceData();
};

