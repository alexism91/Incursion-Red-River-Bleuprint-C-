#pragma once
#include "CoreMinimal.h"
#include "EOnSenseEvent.h"
#include "OnSensedFromDelegate.generated.h"

class AActor;
class USensorBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FOnSensedFrom, AActor*, SensedActor, const USensorBase*, Sensor, int32, Channel, EOnSenseEvent, SenseEvent);

