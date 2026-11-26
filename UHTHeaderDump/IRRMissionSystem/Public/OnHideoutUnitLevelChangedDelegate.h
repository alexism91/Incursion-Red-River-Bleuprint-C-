#pragma once
#include "CoreMinimal.h"
#include "OnHideoutUnitLevelChangedDelegate.generated.h"

class UIRRHideoutUnitComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHideoutUnitLevelChanged, UIRRHideoutUnitComponent*, HideoutUnit, int32, NewLevel);

