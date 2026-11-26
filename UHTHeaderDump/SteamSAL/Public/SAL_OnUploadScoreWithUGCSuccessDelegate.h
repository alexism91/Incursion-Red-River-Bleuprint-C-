#pragma once
#include "CoreMinimal.h"
#include "SAL_UGCHandle.h"
#include "SAL_OnUploadScoreWithUGCSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSAL_OnUploadScoreWithUGCSuccess, int32, NewScore, const FSAL_UGCHandle&, UGCHandle);

