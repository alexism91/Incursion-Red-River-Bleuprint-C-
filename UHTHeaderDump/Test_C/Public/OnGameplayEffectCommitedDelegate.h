#pragma once
#include "CoreMinimal.h"
#include "OnGameplayEffectCommitedDelegate.generated.h"

class USimpleGameplayEffect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameplayEffectCommited, USimpleGameplayEffect*, GameplayEffect);

