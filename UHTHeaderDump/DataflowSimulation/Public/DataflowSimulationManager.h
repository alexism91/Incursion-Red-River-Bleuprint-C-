#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "DataflowSimulationManager.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UDataflowSimulationManager : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UDataflowSimulationManager();

};

