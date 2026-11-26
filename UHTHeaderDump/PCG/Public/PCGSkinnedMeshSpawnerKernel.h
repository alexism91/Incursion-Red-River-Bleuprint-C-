#pragma once
#include "CoreMinimal.h"
#include "PCGComputeKernel.h"
#include "PCGSkinnedMeshSpawnerKernel.generated.h"

UCLASS(Blueprintable)
class UPCGSkinnedMeshSpawnerKernel : public UPCGComputeKernel {
    GENERATED_BODY()
public:
    UPCGSkinnedMeshSpawnerKernel();

};

