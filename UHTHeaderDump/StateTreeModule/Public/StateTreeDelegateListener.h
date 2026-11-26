#pragma once
#include "CoreMinimal.h"
#include "StateTreeDelegateDispatcher.h"
#include "StateTreeDelegateListener.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeDelegateListener {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeDelegateDispatcher Dispatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
public:
    STATETREEMODULE_API FStateTreeDelegateListener();
};

