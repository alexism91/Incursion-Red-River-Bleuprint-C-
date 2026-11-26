#pragma once
#include "CoreMinimal.h"
#include "OnLoadingScreenVisibilityChangedDelegateDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadingScreenVisibilityChangedDelegateDynamic, bool, bNewState);

