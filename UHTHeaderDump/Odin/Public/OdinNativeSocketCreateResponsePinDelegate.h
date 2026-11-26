#pragma once
#include "CoreMinimal.h"
#include "OdinNativeSocketCreateResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeSocketCreateResponsePin, bool, success);

