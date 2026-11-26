#pragma once
#include "CoreMinimal.h"
#include "ContainerItem.h"
#include "OnGunsmithPresetImportedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGunsmithPresetImported, const FContainerItem&, PresetItem);

