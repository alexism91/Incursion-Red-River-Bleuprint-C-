#pragma once
#include "CoreMinimal.h"
#include "OdinNativeEncoderFreeResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeEncoderFreeResponsePin, bool, success);

