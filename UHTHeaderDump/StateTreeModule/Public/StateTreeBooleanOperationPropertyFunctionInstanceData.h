#pragma once
#include "CoreMinimal.h"
#include "StateTreeBooleanOperationPropertyFunctionInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeBooleanOperationPropertyFunctionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResult;
    
    STATETREEMODULE_API FStateTreeBooleanOperationPropertyFunctionInstanceData();
};

