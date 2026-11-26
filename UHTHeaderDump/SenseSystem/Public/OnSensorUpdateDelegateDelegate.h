#pragma once
#include "CoreMinimal.h"
#include "SensedStimulus.h"
#include "OnSensorUpdateDelegateDelegate.generated.h"

class USensorBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSensorUpdateDelegate, const USensorBase*, SensorPtr, int32, Channel, const TArray<FSensedStimulus>&, inSensedStimulus);

