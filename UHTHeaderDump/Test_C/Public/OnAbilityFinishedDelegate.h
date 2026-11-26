#pragma once
#include "CoreMinimal.h"
#include "OnAbilityFinishedDelegate.generated.h"

class USimpleGameplayAbility;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAbilityFinished, USimpleGameplayAbility*, GameplayAbility, bool, success);

