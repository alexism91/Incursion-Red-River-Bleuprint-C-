#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataProvider -FallbackName=ComputeDataProvider
#include "OptimusRawBufferDataProvider.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UOptimusRawBufferDataProvider : public UComputeDataProvider {
    GENERATED_BODY()
public:
    UOptimusRawBufferDataProvider();

};

