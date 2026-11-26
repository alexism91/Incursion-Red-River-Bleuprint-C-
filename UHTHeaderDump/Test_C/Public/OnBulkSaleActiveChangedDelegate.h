#pragma once
#include "CoreMinimal.h"
#include "OnBulkSaleActiveChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBulkSaleActiveChanged, bool, bActive);

