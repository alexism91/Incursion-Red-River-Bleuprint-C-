#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OptimusCore -ObjectName=OptimusComputeDataInterface -FallbackName=OptimusComputeDataInterface
#include "OptimusGroomMeshesReadDataInterface.generated.h"

UCLASS(Blueprintable)
class UOptimusGroomMeshesReadDataInterface : public UOptimusComputeDataInterface {
    GENERATED_BODY()
public:
    UOptimusGroomMeshesReadDataInterface();

};

