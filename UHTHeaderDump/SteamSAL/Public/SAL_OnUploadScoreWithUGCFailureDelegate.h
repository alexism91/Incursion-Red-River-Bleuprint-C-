#pragma once
#include "CoreMinimal.h"
#include "SAL_OnUploadScoreWithUGCFailureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSAL_OnUploadScoreWithUGCFailure, const FString&, ErrorMessage);

