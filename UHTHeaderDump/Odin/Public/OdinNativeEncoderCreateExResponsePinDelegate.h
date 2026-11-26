#pragma once
#include "CoreMinimal.h"
#include "OdinNativeEncoderCreateExResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeEncoderCreateExResponsePin, bool, success);

