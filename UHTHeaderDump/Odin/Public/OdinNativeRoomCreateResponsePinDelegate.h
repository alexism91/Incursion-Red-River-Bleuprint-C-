#pragma once
#include "CoreMinimal.h"
#include "OdinNativeRoomCreateResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeRoomCreateResponsePin, bool, success);

