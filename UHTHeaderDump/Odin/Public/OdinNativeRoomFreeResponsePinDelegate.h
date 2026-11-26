#pragma once
#include "CoreMinimal.h"
#include "OdinNativeRoomFreeResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeRoomFreeResponsePin, bool, success);

