#pragma once
#include "CoreMinimal.h"
#include "DataflowSimulationNode.h"
#include "DataflowSimulationProperty.h"
#include "FilterSimulationProxiesDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FFilterSimulationProxiesDataflowNode : public FDataflowSimulationNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDataflowSimulationProperty> SimulationProxies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDataflowSimulationProperty> FilteredProxies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SimulationGroups;
    
    DATAFLOWSIMULATION_API FFilterSimulationProxiesDataflowNode();
};

