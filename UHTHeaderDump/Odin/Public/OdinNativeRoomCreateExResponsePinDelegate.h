#pragma once
#include "CoreMinimal.h"
#include "OdinNativeRoomCreateExResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeRoomCreateExResponsePin, bool, success);

