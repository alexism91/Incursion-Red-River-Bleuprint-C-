#pragma once
#include "CoreMinimal.h"
#include "StateTreeFloatCombinaisonPropertyFunctionInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeFloatCombinaisonPropertyFunctionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    STATETREEMODULE_API FStateTreeFloatCombinaisonPropertyFunctionInstanceData();
};

