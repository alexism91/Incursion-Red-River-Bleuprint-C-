#pragma once
#include "CoreMinimal.h"
#include "ActiveSensor.h"
#include "ActiveSensorBlueprintBase.generated.h"

class USenseReceiverComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew, HideDropdown)
class SENSESYSTEM_API UActiveSensorBlueprintBase : public UActiveSensor {
    GENERATED_BODY()
public:
    UActiveSensorBlueprintBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeFromReceiver_BP(USenseReceiverComponent* InSenseReceiver);
    
};

