#pragma once
#include "CoreMinimal.h"
#include "OptimusKernelConstantContainer.h"
#include "OptimusConstantContainer.generated.h"

USTRUCT(BlueprintType)
struct FOptimusConstantContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimusKernelConstantContainer> KernelContainers;
    
public:
    OPTIMUSCORE_API FOptimusConstantContainer();
};

