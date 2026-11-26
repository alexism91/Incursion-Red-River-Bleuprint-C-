#pragma once
#include "CoreMinimal.h"
#include "DataflowInvalidNode.h"
#include "DataflowSimulationTime.h"
#include "GetSimulationTimeDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FGetSimulationTimeDataflowNode : public FDataflowInvalidNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FDataflowSimulationTime SimulationTime;
    
    DATAFLOWSIMULATION_API FGetSimulationTimeDataflowNode();
};

