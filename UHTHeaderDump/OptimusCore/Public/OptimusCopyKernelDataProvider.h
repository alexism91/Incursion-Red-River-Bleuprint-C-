#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataProvider -FallbackName=ComputeDataProvider
#include "OptimusCopyKernelDataProvider.generated.h"

UCLASS(Blueprintable)
class UOptimusCopyKernelDataProvider : public UComputeDataProvider {
    GENERATED_BODY()
public:
    UOptimusCopyKernelDataProvider();

};

