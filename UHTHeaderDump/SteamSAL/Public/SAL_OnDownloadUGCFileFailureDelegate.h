#pragma once
#include "CoreMinimal.h"
#include "SAL_OnDownloadUGCFileFailureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSAL_OnDownloadUGCFileFailure, const FString&, ErrorMessage);

