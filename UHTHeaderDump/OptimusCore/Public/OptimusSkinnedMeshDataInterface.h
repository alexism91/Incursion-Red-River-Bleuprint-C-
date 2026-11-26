#pragma once
#include "CoreMinimal.h"
#include "OptimusComputeDataInterface.h"
#include "OptimusSkinnedMeshDataInterface.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOptimusSkinnedMeshDataInterface : public UOptimusComputeDataInterface {
    GENERATED_BODY()
public:
    UOptimusSkinnedMeshDataInterface();

};

