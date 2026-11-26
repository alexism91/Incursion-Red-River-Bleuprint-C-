#pragma once
#include "CoreMinimal.h"
#include "StateTreeActiveStates.h"
#include "StateTreeStateHandle.h"
#include "RecordedStateTreeExecutionFrame.generated.h"

class UStateTree;

USTRUCT(BlueprintType)
struct FRecordedStateTreeExecutionFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStateTree* StateTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeStateHandle RootState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeActiveStates ActiveStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsGlobalFrame: 1;
    
    STATETREEMODULE_API FRecordedStateTreeExecutionFrame();
};

