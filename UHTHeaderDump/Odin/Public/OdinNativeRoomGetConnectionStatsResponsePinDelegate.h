#pragma once
#include "CoreMinimal.h"
#include "OdinNativeRoomGetConnectionStatsResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeRoomGetConnectionStatsResponsePin, bool, success);

