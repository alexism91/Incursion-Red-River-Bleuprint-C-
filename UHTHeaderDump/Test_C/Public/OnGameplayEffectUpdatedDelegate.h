#pragma once
#include "CoreMinimal.h"
#include "OnGameplayEffectUpdatedDelegate.generated.h"

class USimpleGameplayEffect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameplayEffectUpdated, USimpleGameplayEffect*, GameplayEffect);

