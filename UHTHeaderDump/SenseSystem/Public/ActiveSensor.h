#pragma once
#include "CoreMinimal.h"
#include "OnSenseTestActorDelegate.h"
#include "OnSensorAsyncCompleteDelegate.h"
#include "SensorBase.h"
#include "ActiveSensor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SENSESYSTEM_API UActiveSensor : public USensorBase {
    GENERATED_BODY()
public:
    UActiveSensor();

    UFUNCTION(BlueprintCallable)
    void RunManualSensor(bool bOverride_SenseState);
    
    UFUNCTION(BlueprintCallable)
    void AsyncManualSensorDetect_BestActor(FOnSenseTestActor Delegate, bool bOverride_SenseState);
    
    UFUNCTION(BlueprintCallable)
    void AsyncManualSensor(FOnSensorAsyncComplete Delegate, bool bOverride_SenseState);
    
};

