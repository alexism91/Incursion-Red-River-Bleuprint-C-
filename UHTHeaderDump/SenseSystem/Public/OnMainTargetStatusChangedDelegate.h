#pragma once
#include "CoreMinimal.h"
#include "EOnSenseEvent.h"
#include "SensedStimulus.h"
#include "OnMainTargetStatusChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMainTargetStatusChanged, AActor*, Actor, FSensedStimulus, SensedStimulus, const EOnSenseEvent, SenseEvent);

