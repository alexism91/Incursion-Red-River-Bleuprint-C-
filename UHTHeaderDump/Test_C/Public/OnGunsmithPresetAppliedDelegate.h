#pragma once
#include "CoreMinimal.h"
#include "OnGunsmithPresetAppliedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGunsmithPresetApplied, FName, PresetName);

