#pragma once
#include "CoreMinimal.h"
#include "OdinNativeDecoderFreeResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeDecoderFreeResponsePin, bool, success);

