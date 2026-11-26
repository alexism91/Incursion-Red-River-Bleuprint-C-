#pragma once
#include "CoreMinimal.h"
#include "OdinNativeEncoderPushResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeEncoderPushResponsePin, bool, success);

