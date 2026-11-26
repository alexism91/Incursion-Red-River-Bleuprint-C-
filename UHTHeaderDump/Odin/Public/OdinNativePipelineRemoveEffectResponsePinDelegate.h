#pragma once
#include "CoreMinimal.h"
#include "OdinNativePipelineRemoveEffectResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativePipelineRemoveEffectResponsePin, bool, success);

