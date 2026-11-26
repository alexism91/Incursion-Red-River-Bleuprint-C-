#pragma once
#include "CoreMinimal.h"
#include "EOnSenseEvent.h"
#include "OnSensedFromSensorDelegate.generated.h"

class USensorBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSensedFromSensor, const USensorBase*, Sensor, int32, Channel, EOnSenseEvent, SenseEvent);

