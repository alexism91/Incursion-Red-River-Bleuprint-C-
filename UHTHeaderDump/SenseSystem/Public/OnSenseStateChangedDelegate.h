#pragma once
#include "CoreMinimal.h"
#include "EOnSenseEvent.h"
#include "OnSenseStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSenseStateChanged, FName, SensorTag, EOnSenseEvent, SenseEvent);

