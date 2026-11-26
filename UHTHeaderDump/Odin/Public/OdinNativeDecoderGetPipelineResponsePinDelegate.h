#pragma once
#include "CoreMinimal.h"
#include "OdinNativeDecoderGetPipelineResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeDecoderGetPipelineResponsePin, bool, success);

