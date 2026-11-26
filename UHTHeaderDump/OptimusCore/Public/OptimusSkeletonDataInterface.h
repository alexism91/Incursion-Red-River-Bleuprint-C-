#pragma once
#include "CoreMinimal.h"
#include "OptimusComputeDataInterface.h"
#include "OptimusSkeletonDataInterface.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOptimusSkeletonDataInterface : public UOptimusComputeDataInterface {
    GENERATED_BODY()
public:
    UOptimusSkeletonDataInterface();

};

