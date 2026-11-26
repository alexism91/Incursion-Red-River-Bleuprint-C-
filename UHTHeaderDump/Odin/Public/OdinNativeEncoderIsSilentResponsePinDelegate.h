#pragma once
#include "CoreMinimal.h"
#include "OdinNativeEncoderIsSilentResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeEncoderIsSilentResponsePin, bool, success);

