#pragma once
#include "CoreMinimal.h"
#include "PCGComputeKernel.h"
#include "PCGNormalToDensityKernel.generated.h"

UCLASS(Blueprintable)
class UPCGNormalToDensityKernel : public UPCGComputeKernel {
    GENERATED_BODY()
public:
    UPCGNormalToDensityKernel();

};

