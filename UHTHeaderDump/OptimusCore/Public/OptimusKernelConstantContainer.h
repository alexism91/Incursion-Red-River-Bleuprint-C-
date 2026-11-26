#pragma once
#include "CoreMinimal.h"
#include "OptimusConstant.h"
#include "OptimusKernelConstantContainer.generated.h"

USTRUCT(BlueprintType)
struct FOptimusKernelConstantContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimusConstant> InputConstants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimusConstant> OutputConstants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> GroupNameToBindingIndex;
    
    OPTIMUSCORE_API FOptimusKernelConstantContainer();
};

