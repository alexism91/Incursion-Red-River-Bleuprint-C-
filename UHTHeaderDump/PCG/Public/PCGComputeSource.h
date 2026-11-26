#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeSource -FallbackName=ComputeSource
#include "PCGNodeSourceTextProvider.h"
#include "PCGComputeSource.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGComputeSource : public UComputeSource, public IPCGNodeSourceTextProvider {
    GENERATED_BODY()
public:
    UPCGComputeSource();


    // Fix for true pure virtual functions not being implemented
};

