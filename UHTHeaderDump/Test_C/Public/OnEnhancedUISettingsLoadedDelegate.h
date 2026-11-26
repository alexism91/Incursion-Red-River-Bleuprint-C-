#pragma once
#include "CoreMinimal.h"
#include "OnEnhancedUISettingsLoadedDelegate.generated.h"

class UInventoryEnhancedUISettings;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnhancedUISettingsLoaded, UInventoryEnhancedUISettings*, LoadedEnhancedUISettings);

