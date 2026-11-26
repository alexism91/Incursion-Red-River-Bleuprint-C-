#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowSimulation -ObjectName=DataflowPhysicsSolverProxy -FallbackName=DataflowPhysicsSolverProxy
#include "DataflowGroomSolverProxy.generated.h"

USTRUCT(BlueprintType)
struct FDataflowGroomSolverProxy : public FDataflowPhysicsSolverProxy {
    GENERATED_BODY()
public:
    HAIRSTRANDSSOLVER_API FDataflowGroomSolverProxy();
};

