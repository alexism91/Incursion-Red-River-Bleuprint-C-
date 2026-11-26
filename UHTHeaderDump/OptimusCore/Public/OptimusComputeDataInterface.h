#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataInterface -FallbackName=ComputeDataInterface
#include "OptimusComputeDataInterface.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UOptimusComputeDataInterface : public UComputeDataInterface {
    GENERATED_BODY()
public:
    UOptimusComputeDataInterface();

};

