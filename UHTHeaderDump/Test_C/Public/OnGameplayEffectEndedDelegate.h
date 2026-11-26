#pragma once
#include "CoreMinimal.h"
#include "OnGameplayEffectEndedDelegate.generated.h"

class USimpleGameplayEffect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameplayEffectEnded, USimpleGameplayEffect*, GameplayEffect);

