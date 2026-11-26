#pragma once
#include "CoreMinimal.h"
#include "OdinNativeEncoderPopResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeEncoderPopResponsePin, bool, success);

