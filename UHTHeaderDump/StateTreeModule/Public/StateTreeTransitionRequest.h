#pragma once
#include "CoreMinimal.h"
#include "EStateTreeSelectionFallback.h"
#include "EStateTreeTransitionPriority.h"
#include "StateTreeStateHandle.h"
#include "StateTreeTransitionRequest.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeTransitionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeStateHandle TargetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreeTransitionPriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreeSelectionFallback Fallback;
    
    STATETREEMODULE_API FStateTreeTransitionRequest();
};

