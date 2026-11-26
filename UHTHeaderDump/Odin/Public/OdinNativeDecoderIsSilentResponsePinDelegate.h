#pragma once
#include "CoreMinimal.h"
#include "OdinNativeDecoderIsSilentResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeDecoderIsSilentResponsePin, bool, success);

