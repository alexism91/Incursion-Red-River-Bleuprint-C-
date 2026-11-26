#pragma once
#include "CoreMinimal.h"
#include "IRRGameplaySettings.h"
#include "OnFirstPersonControllerSettingsChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFirstPersonControllerSettingsChanged, FIRRGameplaySettings, NewSettings);

