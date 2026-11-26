#pragma once
#include "CoreMinimal.h"
#include "OdinNativeRoomGetIdShutdownResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeRoomGetIdShutdownResponsePin, bool, success);

