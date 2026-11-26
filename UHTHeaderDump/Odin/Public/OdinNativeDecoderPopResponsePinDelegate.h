#pragma once
#include "CoreMinimal.h"
#include "OdinNativeDecoderPopResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeDecoderPopResponsePin, bool, success);

