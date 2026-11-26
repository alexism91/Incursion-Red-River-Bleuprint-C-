#pragma once
#include "CoreMinimal.h"
#include "PCGComputeKernel.h"
#include "PCGCopyPointsKernel.generated.h"

UCLASS(Blueprintable)
class UPCGCopyPointsKernel : public UPCGComputeKernel {
    GENERATED_BODY()
public:
    UPCGCopyPointsKernel();

};

