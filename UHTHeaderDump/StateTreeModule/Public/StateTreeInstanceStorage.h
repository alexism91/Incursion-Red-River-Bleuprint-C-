#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedPropertyBag -FallbackName=InstancedPropertyBag
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedStructContainer -FallbackName=InstancedStructContainer
#include "StateTreeExecutionState.h"
#include "StateTreeTemporaryInstanceData.h"
#include "StateTreeTransitionRequest.h"
#include "StateTreeInstanceStorage.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeInstanceStorage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStructContainer InstanceStructs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FStateTreeExecutionState ExecutionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FStateTreeTemporaryInstanceData> TemporaryInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FStateTreeTransitionRequest> TransitionRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FInstancedPropertyBag GlobalParameters;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 UniqueIdGenerator;
    
public:
    STATETREEMODULE_API FStateTreeInstanceStorage();
};

