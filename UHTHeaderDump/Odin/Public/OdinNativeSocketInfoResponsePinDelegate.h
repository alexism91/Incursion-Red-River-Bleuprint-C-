#pragma once
#include "CoreMinimal.h"
#include "OdinNativeSocketInfoResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeSocketInfoResponsePin, bool, success);

