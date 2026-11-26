#pragma once
#include "CoreMinimal.h"
#include "IRRVendorStockItem.h"
#include "ShoppingCartUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FShoppingCartUpdated, const TArray<FIRRVendorStockItem>&, NewShoppingCartItems, int32, NewPrimaryCurrencyPrice, int32, NewSecondaryCurrencyPrice, bool, bCanPurchase, const FString&, ErrorMessage);

