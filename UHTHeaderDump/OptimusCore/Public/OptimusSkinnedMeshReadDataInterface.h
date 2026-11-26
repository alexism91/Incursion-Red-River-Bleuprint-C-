#pragma once
#include "CoreMinimal.h"
#include "OptimusComputeDataInterface.h"
#include "OptimusSkinnedMeshReadDataInterface.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOptimusSkinnedMeshReadDataInterface : public UOptimusComputeDataInterface {
    GENERATED_BODY()
public:
    UOptimusSkinnedMeshReadDataInterface();

};

