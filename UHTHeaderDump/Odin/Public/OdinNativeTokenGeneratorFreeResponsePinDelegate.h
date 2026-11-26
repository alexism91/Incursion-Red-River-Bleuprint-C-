#pragma once
#include "CoreMinimal.h"
#include "OdinNativeTokenGeneratorFreeResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeTokenGeneratorFreeResponsePin, bool, success);

