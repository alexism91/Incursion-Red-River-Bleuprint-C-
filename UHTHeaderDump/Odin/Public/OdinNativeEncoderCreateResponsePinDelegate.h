#pragma once
#include "CoreMinimal.h"
#include "OdinNativeEncoderCreateResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeEncoderCreateResponsePin, bool, success);

