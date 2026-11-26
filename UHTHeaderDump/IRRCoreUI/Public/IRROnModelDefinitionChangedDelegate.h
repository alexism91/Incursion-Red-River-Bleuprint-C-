#pragma once
#include "CoreMinimal.h"
#include "IRROnModelDefinitionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIRROnModelDefinitionChanged, FName, SettingId);

