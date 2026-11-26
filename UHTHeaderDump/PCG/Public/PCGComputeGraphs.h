#pragma once
#include "CoreMinimal.h"
#include "PCGComputeGraphs.generated.h"

class UPCGComputeGraph;

USTRUCT(BlueprintType)
struct FPCGComputeGraphs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPCGComputeGraph*> ComputeGraphs;
    
    PCG_API FPCGComputeGraphs();
};

