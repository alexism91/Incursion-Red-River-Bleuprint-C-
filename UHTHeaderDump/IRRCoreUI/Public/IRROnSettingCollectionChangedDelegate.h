#pragma once
#include "CoreMinimal.h"
#include "IRROnSettingCollectionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIRROnSettingCollectionChanged, FName, CollectionId);

