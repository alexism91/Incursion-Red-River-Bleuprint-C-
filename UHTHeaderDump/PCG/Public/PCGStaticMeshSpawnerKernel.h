#pragma once
#include "CoreMinimal.h"
#include "PCGComputeKernel.h"
#include "PCGStaticMeshSpawnerKernel.generated.h"

UCLASS(Blueprintable)
class UPCGStaticMeshSpawnerKernel : public UPCGComputeKernel {
    GENERATED_BODY()
public:
    UPCGStaticMeshSpawnerKernel();

};

