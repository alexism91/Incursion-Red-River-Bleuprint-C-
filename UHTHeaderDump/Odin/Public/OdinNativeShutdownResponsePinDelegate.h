#pragma once
#include "CoreMinimal.h"
#include "OdinNativeShutdownResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeShutdownResponsePin, bool, success);

