#pragma once
#include "CoreMinimal.h"
#include "StateTreeIndex16.h"
#include "StateTreeSharedEvent.h"
#include "StateTreeStateHandle.h"
#include "StateTreeTransitionDelayedState.generated.h"

class UStateTree;

USTRUCT(BlueprintType)
struct FStateTreeTransitionDelayedState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStateTree* StateTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeSharedEvent CapturedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLeft;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CapturedEventHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeStateHandle StateHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeIndex16 TransitionIndex;
    
    STATETREEMODULE_API FStateTreeTransitionDelayedState();
};

