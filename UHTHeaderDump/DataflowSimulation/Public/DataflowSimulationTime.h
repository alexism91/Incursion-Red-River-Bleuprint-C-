#pragma once
#include "CoreMinimal.h"
#include "DataflowSimulationTime.generated.h"

USTRUCT(BlueprintType)
struct FDataflowSimulationTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float DeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float TimeOffset;
    
    DATAFLOWSIMULATION_API FDataflowSimulationTime();
};

