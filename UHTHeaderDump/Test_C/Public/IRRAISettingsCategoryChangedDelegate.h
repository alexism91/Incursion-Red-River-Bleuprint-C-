#pragma once
#include "CoreMinimal.h"
#include "IRRAISettingsCategoryChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIRRAISettingsCategoryChanged, FName, CategoryId);

