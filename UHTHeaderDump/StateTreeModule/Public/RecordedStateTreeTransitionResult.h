#pragma once
#include "CoreMinimal.h"
#include "EStateTreeTransitionPriority.h"
#include "RecordedStateTreeExecutionFrame.h"
#include "StateTreeEvent.h"
#include "StateTreeStateHandle.h"
#include "RecordedStateTreeTransitionResult.generated.h"

class UStateTree;

USTRUCT(BlueprintType)
struct FRecordedStateTreeTransitionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecordedStateTreeExecutionFrame> NextActiveFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreeEvent> NextActiveFrameEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeStateHandle SourceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeStateHandle TargetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreeTransitionPriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStateTree* SourceStateTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeStateHandle SourceRootState;
    
    STATETREEMODULE_API FRecordedStateTreeTransitionResult();
};

