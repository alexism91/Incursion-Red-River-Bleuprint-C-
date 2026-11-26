#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowSimulation -ObjectName=DataflowPhysicsSolverProxy -FallbackName=DataflowPhysicsSolverProxy
#include "DataflowRigidSolverProxy.generated.h"

USTRUCT(BlueprintType)
struct FDataflowRigidSolverProxy : public FDataflowPhysicsSolverProxy {
    GENERATED_BODY()
public:
    CHAOSSOLVERENGINE_API FDataflowRigidSolverProxy();
};

