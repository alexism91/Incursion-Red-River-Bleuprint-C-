#pragma once
#include "CoreMinimal.h"
#include "OdinNativePipelineUpdateApmPlaybackResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativePipelineUpdateApmPlaybackResponsePin, bool, success);

