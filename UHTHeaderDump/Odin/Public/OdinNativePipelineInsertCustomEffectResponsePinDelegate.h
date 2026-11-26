#pragma once
#include "CoreMinimal.h"
#include "OdinNativePipelineInsertCustomEffectResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativePipelineInsertCustomEffectResponsePin, bool, success);

