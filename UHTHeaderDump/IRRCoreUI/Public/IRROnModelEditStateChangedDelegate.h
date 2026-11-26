#pragma once
#include "CoreMinimal.h"
#include "IRRSettingEditState.h"
#include "IRROnModelEditStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIRROnModelEditStateChanged, FName, SettingId, const FIRRSettingEditState&, State);

