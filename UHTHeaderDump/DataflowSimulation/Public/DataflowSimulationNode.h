#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "DataflowSimulationNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowSimulationNode : public FDataflowNode {
    GENERATED_BODY()
public:
    DATAFLOWSIMULATION_API FDataflowSimulationNode();
};

