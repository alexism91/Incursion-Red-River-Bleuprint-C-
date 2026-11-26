#pragma once
#include "CoreMinimal.h"
#include "DataflowSimulationProxy.h"
#include "DataflowConstraintObjectProxy.generated.h"

USTRUCT(BlueprintType)
struct FDataflowConstraintObjectProxy : public FDataflowSimulationProxy {
    GENERATED_BODY()
public:
    DATAFLOWSIMULATION_API FDataflowConstraintObjectProxy();
};

