#pragma once
#include "CoreMinimal.h"
#include "OdinActivityEffectCallbackDelegate.generated.h"

class UOdinActivityEffect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOdinActivityEffectCallback, const bool, IsActive, const UOdinActivityEffect*, userData);

