#pragma once
#include "CoreMinimal.h"
#include "SAL_UploadScoreFailureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSAL_UploadScoreFailure, const FString&, ErrorMessage);

