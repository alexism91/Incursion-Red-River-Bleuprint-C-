#pragma once
#include "CoreMinimal.h"
#include "OdinNativeRoomSendDatagramResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeRoomSendDatagramResponsePin, bool, success);

