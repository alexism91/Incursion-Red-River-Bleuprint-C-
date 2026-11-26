#pragma once
#include "CoreMinimal.h"
#include "OnRaidTradeDropHoverDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnRaidTradeDropHover, bool, bActive, bool, bValid, const FText&, reason);

