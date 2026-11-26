#pragma once
#include "CoreMinimal.h"
#include "DataflowSimulationProxy.h"
#include "DataflowCollisionObjectProxy.generated.h"

USTRUCT(BlueprintType)
struct FDataflowCollisionObjectProxy : public FDataflowSimulationProxy {
    GENERATED_BODY()
public:
    DATAFLOWSIMULATION_API FDataflowCollisionObjectProxy();
};

