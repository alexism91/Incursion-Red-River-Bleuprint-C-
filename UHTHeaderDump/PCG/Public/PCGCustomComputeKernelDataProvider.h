#pragma once
#include "CoreMinimal.h"
#include "PCGComputeDataProvider.h"
#include "PCGCustomComputeKernelDataProvider.generated.h"

class UPCGComputeKernel;

UCLASS(Blueprintable)
class UPCGCustomComputeKernelDataProvider : public UPCGComputeDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGComputeKernel* Kernel;
    
    UPCGCustomComputeKernelDataProvider();

};

