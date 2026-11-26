#pragma once
#include "CoreMinimal.h"
#include "IRRGunsmithParams.h"
#include "OnGunsmithParamsUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGunsmithParamsUpdated, FIRRGunsmithParams, OutParams);

