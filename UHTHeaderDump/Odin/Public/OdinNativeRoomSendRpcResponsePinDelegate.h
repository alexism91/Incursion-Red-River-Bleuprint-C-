#pragma once
#include "CoreMinimal.h"
#include "OdinNativeRoomSendRpcResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeRoomSendRpcResponsePin, bool, success);

