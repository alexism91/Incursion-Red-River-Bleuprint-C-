#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "IRRVendorStockItem.h"
#include "VendorSearchResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FVendorSearchResult, const TArray<FIRRVendorStockItem>&, OutData, FGameplayTagContainer, OutFilters);

