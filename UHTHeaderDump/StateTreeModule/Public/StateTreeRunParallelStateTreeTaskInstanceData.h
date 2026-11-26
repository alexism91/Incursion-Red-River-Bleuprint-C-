#pragma once
#include "CoreMinimal.h"
#include "StateTreeInstanceData.h"
#include "StateTreeReference.h"
#include "StateTreeRunParallelStateTreeTaskInstanceData.generated.h"

class UStateTree;

USTRUCT(BlueprintType)
struct FStateTreeRunParallelStateTreeTaskInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeReference StateTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FStateTreeInstanceData TreeInstanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStateTree* RunningStateTree;
    
    STATETREEMODULE_API FStateTreeRunParallelStateTreeTaskInstanceData();
};

