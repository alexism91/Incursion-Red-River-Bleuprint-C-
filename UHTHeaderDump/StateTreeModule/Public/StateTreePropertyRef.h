#pragma once
#include "CoreMinimal.h"
#include "StateTreeIndex16.h"
#include "StateTreePropertyRef.generated.h"

USTRUCT(BlueprintType)
struct FStateTreePropertyRef {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeIndex16 RefAccessIndex;
    
public:
    STATETREEMODULE_API FStateTreePropertyRef();
};

