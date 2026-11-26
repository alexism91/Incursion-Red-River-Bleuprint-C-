#pragma once
#include "CoreMinimal.h"
#include "IRRSettingValue.h"
#include "IRROnCollectionSettingChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIRROnCollectionSettingChanged, FName, CollectionId, FName, SettingId, const FIRRSettingValue&, Value);

