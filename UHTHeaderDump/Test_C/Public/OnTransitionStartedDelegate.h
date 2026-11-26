#pragma once
#include "CoreMinimal.h"
#include "OnTransitionStartedDelegate.generated.h"

class USightComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTransitionStarted, USightComponent*, NewTargetSightComponent);

