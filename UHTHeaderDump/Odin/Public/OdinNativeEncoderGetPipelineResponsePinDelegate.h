#pragma once
#include "CoreMinimal.h"
#include "OdinNativeEncoderGetPipelineResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeEncoderGetPipelineResponsePin, bool, success);

