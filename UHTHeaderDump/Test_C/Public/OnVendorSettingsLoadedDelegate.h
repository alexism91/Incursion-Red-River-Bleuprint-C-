#pragma once
#include "CoreMinimal.h"
#include "OnVendorSettingsLoadedDelegate.generated.h"

class UVendorSettings;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVendorSettingsLoaded, UVendorSettings*, LoadedVendorSettings);

