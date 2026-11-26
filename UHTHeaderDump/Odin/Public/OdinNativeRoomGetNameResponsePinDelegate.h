#pragma once
#include "CoreMinimal.h"
#include "OdinNativeRoomGetNameResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeRoomGetNameResponsePin, bool, success);

