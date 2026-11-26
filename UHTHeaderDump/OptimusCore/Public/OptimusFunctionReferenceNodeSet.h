#pragma once
#include "CoreMinimal.h"
#include "OptimusFunctionReferenceNodeSet.generated.h"

class UOptimusNode_FunctionReference;

USTRUCT(BlueprintType)
struct FOptimusFunctionReferenceNodeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftObjectPtr<UOptimusNode_FunctionReference>> Nodes;
    
    OPTIMUSCORE_API FOptimusFunctionReferenceNodeSet();
};

