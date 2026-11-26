#pragma once
#include "CoreMinimal.h"
#include "PCGComputeKernel.h"
#include "PCGCopyPointsAnalysisKernel.generated.h"

UCLASS(Blueprintable)
class UPCGCopyPointsAnalysisKernel : public UPCGComputeKernel {
    GENERATED_BODY()
public:
    UPCGCopyPointsAnalysisKernel();

};

