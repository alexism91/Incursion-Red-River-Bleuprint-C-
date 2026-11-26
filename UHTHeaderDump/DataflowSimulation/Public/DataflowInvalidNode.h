#pragma once
#include "CoreMinimal.h"
#include "DataflowSimulationNode.h"
#include "DataflowInvalidNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowInvalidNode : public FDataflowSimulationNode {
    GENERATED_BODY()
public:
    DATAFLOWSIMULATION_API FDataflowInvalidNode();
};

