#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OptimusCore -ObjectName=OptimusComputeDataInterface -FallbackName=OptimusComputeDataInterface
#include "OptimusGroomSolverReadDataInterface.generated.h"

UCLASS(Blueprintable)
class UOptimusGroomSolverReadDataInterface : public UOptimusComputeDataInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ResetSimulationTrigger;
    
public:
    UOptimusGroomSolverReadDataInterface();

};

