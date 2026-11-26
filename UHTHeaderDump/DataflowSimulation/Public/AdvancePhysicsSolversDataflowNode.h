#pragma once
#include "CoreMinimal.h"
#include "DataflowSimulationNode.h"
#include "DataflowSimulationProperty.h"
#include "DataflowSimulationTime.h"
#include "AdvancePhysicsSolversDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FAdvancePhysicsSolversDataflowNode : public FDataflowSimulationNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FDataflowSimulationTime SimulationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDataflowSimulationProperty> PhysicsSolvers;
    
    DATAFLOWSIMULATION_API FAdvancePhysicsSolversDataflowNode();
};

