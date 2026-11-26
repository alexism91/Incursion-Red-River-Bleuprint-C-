#pragma once
#include "CoreMinimal.h"
#include "IRRVendorSearchParams.h"
#include "VendorSearchParamsUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVendorSearchParamsUpdated, FIRRVendorSearchParams, OutParams);

