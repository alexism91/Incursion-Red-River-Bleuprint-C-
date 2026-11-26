#pragma once
#include "CoreMinimal.h"
#include "OnInteractionTargetEnabledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractionTargetEnabled, bool, bValue);

