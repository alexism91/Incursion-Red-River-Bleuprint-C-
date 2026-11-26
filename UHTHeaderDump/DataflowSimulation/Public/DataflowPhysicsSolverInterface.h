#pragma once
#include "CoreMinimal.h"
#include "DataflowSimulationInterface.h"
#include "DataflowPhysicsSolverInterface.generated.h"

UINTERFACE(MinimalAPI)
class UDataflowPhysicsSolverInterface : public UDataflowSimulationInterface {
    GENERATED_BODY()
};

class IDataflowPhysicsSolverInterface : public IDataflowSimulationInterface {
    GENERATED_BODY()
public:
};

