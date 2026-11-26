#pragma once
#include "CoreMinimal.h"
#include "OnBulkSaleSelectionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnBulkSaleSelectionChanged, int32, TotalPrice, int32, SelectedCount, bool, bCanSell, const FString&, reason);

