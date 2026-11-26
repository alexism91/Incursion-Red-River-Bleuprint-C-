#pragma once
#include "CoreMinimal.h"
#include "OdinNativeRoomResendUserDataResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeRoomResendUserDataResponsePin, bool, success);

