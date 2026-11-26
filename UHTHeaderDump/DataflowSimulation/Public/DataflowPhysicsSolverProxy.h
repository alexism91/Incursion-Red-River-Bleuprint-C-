#pragma once
#include "CoreMinimal.h"
#include "DataflowSimulationProxy.h"
#include "DataflowPhysicsSolverProxy.generated.h"

USTRUCT(BlueprintType)
struct FDataflowPhysicsSolverProxy : public FDataflowSimulationProxy {
    GENERATED_BODY()
public:
    DATAFLOWSIMULATION_API FDataflowPhysicsSolverProxy();
};

