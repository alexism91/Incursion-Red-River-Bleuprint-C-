#pragma once
#include "CoreMinimal.h"
#include "OdinNativeDecoderPushResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeDecoderPushResponsePin, bool, success);

