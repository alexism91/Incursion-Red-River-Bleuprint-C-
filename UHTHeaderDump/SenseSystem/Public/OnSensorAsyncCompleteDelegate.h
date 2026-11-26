#pragma once
#include "CoreMinimal.h"
#include "OnSensorAsyncCompleteDelegate.generated.h"

class UActiveSensor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSensorAsyncComplete, UActiveSensor*, ActiveSensor);

