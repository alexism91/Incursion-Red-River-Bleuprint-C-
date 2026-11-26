#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeKernelSource -FallbackName=ComputeKernelSource
#include "PCGComputeKernelSource.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UPCGComputeKernelSource : public UComputeKernelSource {
    GENERATED_BODY()
public:
    UPCGComputeKernelSource();

};

