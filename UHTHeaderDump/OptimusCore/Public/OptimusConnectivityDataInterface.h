#pragma once
#include "CoreMinimal.h"
#include "OptimusComputeDataInterface.h"
#include "OptimusConnectivityDataInterface.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOptimusConnectivityDataInterface : public UOptimusComputeDataInterface {
    GENERATED_BODY()
public:
    UOptimusConnectivityDataInterface();

};

