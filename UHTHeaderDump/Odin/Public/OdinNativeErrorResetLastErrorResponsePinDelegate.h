#pragma once
#include "CoreMinimal.h"
#include "OdinNativeErrorResetLastErrorResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeErrorResetLastErrorResponsePin, bool, success);

