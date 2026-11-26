#pragma once
#include "CoreMinimal.h"
#include "OdinNativeErrorGetLastErrorResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeErrorGetLastErrorResponsePin, bool, success);

