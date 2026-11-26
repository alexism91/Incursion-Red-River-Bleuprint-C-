#pragma once
#include "CoreMinimal.h"
#include "OdinNativeSocketSendResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeSocketSendResponsePin, bool, success);

