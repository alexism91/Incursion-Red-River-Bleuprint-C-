#pragma once
#include "CoreMinimal.h"
#include "OnGameplayEffectStartedDelegate.generated.h"

class USimpleGameplayEffect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameplayEffectStarted, USimpleGameplayEffect*, GameplayEffect);

