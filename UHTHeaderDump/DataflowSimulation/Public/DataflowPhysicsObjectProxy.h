#pragma once
#include "CoreMinimal.h"
#include "DataflowSimulationProxy.h"
#include "DataflowPhysicsObjectProxy.generated.h"

USTRUCT(BlueprintType)
struct FDataflowPhysicsObjectProxy : public FDataflowSimulationProxy {
    GENERATED_BODY()
public:
    DATAFLOWSIMULATION_API FDataflowPhysicsObjectProxy();
};

