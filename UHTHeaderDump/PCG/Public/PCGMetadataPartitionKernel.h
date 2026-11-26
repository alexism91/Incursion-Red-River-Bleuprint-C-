#pragma once
#include "CoreMinimal.h"
#include "PCGComputeKernel.h"
#include "PCGMetadataPartitionKernel.generated.h"

UCLASS(Blueprintable)
class UPCGMetadataPartitionKernel : public UPCGComputeKernel {
    GENERATED_BODY()
public:
    UPCGMetadataPartitionKernel();

};

