#pragma once
#include "CoreMinimal.h"
#include "IRRProgressData.h"
#include "OnProgressDataUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProgressDataUpdated, FIRRProgressData, OutData);

