#pragma once
#include "CoreMinimal.h"
#include "OnGameplayEffectFinishedDelegate.generated.h"

class USimpleGameplayEffect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameplayEffectFinished, USimpleGameplayEffect*, GameplayEffect);

