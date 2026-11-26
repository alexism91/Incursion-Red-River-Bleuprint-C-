#pragma once
#include "CoreMinimal.h"
#include "StateTreeIntCombinaisonPropertyFunctionInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeIntCombinaisonPropertyFunctionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Result;
    
    STATETREEMODULE_API FStateTreeIntCombinaisonPropertyFunctionInstanceData();
};

