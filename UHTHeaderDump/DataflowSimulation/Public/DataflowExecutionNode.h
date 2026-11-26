#pragma once
#include "CoreMinimal.h"
#include "DataflowSimulationNode.h"
#include "DataflowExecutionNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowExecutionNode : public FDataflowSimulationNode {
    GENERATED_BODY()
public:
    DATAFLOWSIMULATION_API FDataflowExecutionNode();
};

