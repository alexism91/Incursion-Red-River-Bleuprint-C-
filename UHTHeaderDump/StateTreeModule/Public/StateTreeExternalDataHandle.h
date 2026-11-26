#pragma once
#include "CoreMinimal.h"
#include "StateTreeDataHandle.h"
#include "StateTreeExternalDataHandle.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeExternalDataHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeDataHandle DataHandle;
    
    STATETREEMODULE_API FStateTreeExternalDataHandle();
};

