#pragma once
#include "CoreMinimal.h"
#include "OptimusComputeDataInterface.h"
#include "OptimusHalfEdgeDataInterface.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOptimusHalfEdgeDataInterface : public UOptimusComputeDataInterface {
    GENERATED_BODY()
public:
    UOptimusHalfEdgeDataInterface();

};

