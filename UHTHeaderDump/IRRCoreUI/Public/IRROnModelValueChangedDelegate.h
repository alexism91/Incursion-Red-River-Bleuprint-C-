#pragma once
#include "CoreMinimal.h"
#include "IRRSettingValue.h"
#include "IRROnModelValueChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIRROnModelValueChanged, FName, SettingId, const FIRRSettingValue&, Value);

