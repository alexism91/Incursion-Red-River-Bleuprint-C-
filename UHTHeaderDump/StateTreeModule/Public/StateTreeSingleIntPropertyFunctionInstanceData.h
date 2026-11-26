#pragma once
#include "CoreMinimal.h"
#include "StateTreeSingleIntPropertyFunctionInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeSingleIntPropertyFunctionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Result;
    
    STATETREEMODULE_API FStateTreeSingleIntPropertyFunctionInstanceData();
};

