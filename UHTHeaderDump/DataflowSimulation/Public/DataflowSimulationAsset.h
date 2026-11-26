#pragma once
#include "CoreMinimal.h"
#include "DataflowSimulationAsset.generated.h"

class UDataflow;

USTRUCT(BlueprintType)
struct FDataflowSimulationAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataflow* DataflowAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> SimulationGroups;
    
    DATAFLOWSIMULATION_API FDataflowSimulationAsset();
};

