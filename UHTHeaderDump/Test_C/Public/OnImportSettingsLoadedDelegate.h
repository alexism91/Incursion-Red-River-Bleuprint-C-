#pragma once
#include "CoreMinimal.h"
#include "OnImportSettingsLoadedDelegate.generated.h"

class UInventoryImportSettings;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnImportSettingsLoaded, UInventoryImportSettings*, LoadedImportSettings);

