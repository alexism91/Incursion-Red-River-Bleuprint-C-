#pragma once
#include "CoreMinimal.h"
#include "HairSimulationSolver.generated.h"

USTRUCT(BlueprintType)
struct FHairSimulationSolver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bEnableSimulation;
    
    HAIRSTRANDSCORE_API FHairSimulationSolver();
};

