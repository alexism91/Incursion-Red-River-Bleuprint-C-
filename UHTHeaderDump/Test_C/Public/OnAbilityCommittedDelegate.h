#pragma once
#include "CoreMinimal.h"
#include "OnAbilityCommittedDelegate.generated.h"

class USimpleGameplayAbility;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAbilityCommitted, USimpleGameplayAbility*, GameplayAbility);

