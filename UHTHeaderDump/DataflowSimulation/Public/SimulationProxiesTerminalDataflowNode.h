#pragma once
#include "CoreMinimal.h"
#include "DataflowExecutionNode.h"
#include "DataflowSimulationProperty.h"
#include "SimulationProxiesTerminalDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FSimulationProxiesTerminalDataflowNode : public FDataflowExecutionNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDataflowSimulationProperty> SimulationProxies;
    
    DATAFLOWSIMULATION_API FSimulationProxiesTerminalDataflowNode();
};

