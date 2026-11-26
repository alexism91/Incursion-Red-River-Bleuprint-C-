#pragma once
#include "CoreMinimal.h"
#include "IRRVendorStockItem.h"
#include "StockItemsUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStockItemsUpdated, const TArray<FIRRVendorStockItem>&, NewVendorStockItems);

