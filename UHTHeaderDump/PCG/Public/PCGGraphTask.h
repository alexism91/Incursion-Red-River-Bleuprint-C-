#pragma once
#include "CoreMinimal.h"
#include "EPCGElementSource.h"
#include "PCGGraphTaskInput.h"
#include "PCGPinDependencyExpression.h"
#include "PCGGraphTask.generated.h"

class UPCGNode;
class UPCGSettings;

USTRUCT(BlueprintType)
struct FPCGGraphTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGGraphTaskInput> Inputs;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGElementSource ElementSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPCGNode> NodePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGSettings* CookedSettings;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 NodeID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 CompiledTaskId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 ParentID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGPinDependencyExpression PinDependency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StackIndex;
    
    PCG_API FPCGGraphTask();
};

