#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "DataflowSimulationActor.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UDataflowSimulationActor : public UInterface {
    GENERATED_BODY()
};

class IDataflowSimulationActor : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreDataflowSimulationTick(const float SimulationTime, const float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostDataflowSimulationTick(const float SimulationTime, const float DeltaTime);
    
};

