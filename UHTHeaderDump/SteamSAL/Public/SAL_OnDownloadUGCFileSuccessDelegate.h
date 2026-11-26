#pragma once
#include "CoreMinimal.h"
#include "SAL_UGCHandle.h"
#include "SAL_OnDownloadUGCFileSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSAL_OnDownloadUGCFileSuccess, const FSAL_UGCHandle&, UGCHandle, const TArray<uint8>&, Data, int32, DataSize);

