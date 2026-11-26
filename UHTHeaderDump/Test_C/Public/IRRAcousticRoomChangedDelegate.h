#pragma once
#include "CoreMinimal.h"
#include "EIRRAcousticEnvironment.h"
#include "IRRAcousticRoomChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIRRAcousticRoomChanged, AActor*, RoomActor, EIRRAcousticEnvironment, Environment, bool, bIsIndoors);

