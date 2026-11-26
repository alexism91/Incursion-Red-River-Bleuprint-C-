#pragma once
#include "CoreMinimal.h"
#include "OdinNativeTokenGeneratorSignResponsePinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdinNativeTokenGeneratorSignResponsePin, bool, success);

