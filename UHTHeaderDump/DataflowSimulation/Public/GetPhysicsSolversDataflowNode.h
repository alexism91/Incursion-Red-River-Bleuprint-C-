#pragma once
#include "CoreMinimal.h"
#include "DataflowInvalidNode.h"
#include "DataflowSimulationProperty.h"
#include "GetPhysicsSolversDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FGetPhysicsSolversDataflowNode : public FDataflowInvalidNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDataflowSimulationProperty> PhysicsSolvers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SimulationGroups;
    
    DATAFLOWSIMULATION_API FGetPhysicsSolversDataflowNode();
};

