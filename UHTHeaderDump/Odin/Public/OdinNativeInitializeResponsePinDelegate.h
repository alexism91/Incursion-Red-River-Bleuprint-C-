#pragma once
#include "CoreMinimal.h"
#include "OdinNativeInitializeResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeInitializeResponsePin, bool, success);

