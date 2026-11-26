#pragma once
#include "CoreMinimal.h"
#include "OnAIPresetAppliedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAIPresetApplied, FName, PresetId);

