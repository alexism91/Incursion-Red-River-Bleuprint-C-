#pragma once
#include "CoreMinimal.h"
#include "OdinNativeRoomGetConnectionIdResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeRoomGetConnectionIdResponsePin, bool, success);

