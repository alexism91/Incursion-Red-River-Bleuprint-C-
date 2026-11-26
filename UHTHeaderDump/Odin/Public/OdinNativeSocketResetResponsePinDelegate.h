#pragma once
#include "CoreMinimal.h"
#include "OdinNativeSocketResetResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeSocketResetResponsePin, bool, success);

